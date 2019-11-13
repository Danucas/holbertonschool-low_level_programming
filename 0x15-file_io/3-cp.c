#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int write_to_file(int fd1, int fd2, const char *file_from, char *file_to);
/**
 *_cp - read a file
 *@file_from: the file
 *@file_to: amount of letters
 *Return: status
 */

int _cp(const char *file_from, char *file_to)
{
	int fd1, fd2, cl1, cl2;
	char *fil;

	fd1 = open(file_from, O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
		exit(99);
	}
	write_to_file(fd1, fd2, file_from, file_to);
	cl1 = close(fd1) < 0;
	cl2 = close(fd2) < 0;
	if (cl1 || cl2)
	{
		fil = (cl1) ? (char *) file_from : file_to;
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", fil);
		exit(100);
	}
	return (1);
}
/**
 *write_to_file - read a file
 *@fd1: the file
 *@fd2: amount of letters
 *@file_from: the file
 *@file_to: amount of letters
 *Return: status
 */

int write_to_file(int fd1, int fd2, const char *file_from, char *file_to)
{
	char buff[1024];
	int rd, wr_stat;
	size_t s_len = 1024;

	rd = read(fd1, buff, s_len);
	while (rd > 0)
	{
		wr_stat = write(fd2, buff, rd);
		if (wr_stat == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
			exit(99);
		}
		rd = read(fd1, buff, s_len);
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	return (1);
}
/**
 *main - read a file
 *@argc: the file
 *@argv: amount of letters
 *Return: status
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_cp(argv[1], argv[2]);
	return (0);
}
