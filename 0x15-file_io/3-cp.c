#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *_cp - read a file
 *@file_from: the file
 *@file_to: amount of letters
 *Return: status
 */

int _cp(const char *file_from, char *file_to)
{
	int fd1, fd2, wr_stat;
	char *buff;
	size_t s_len = 1024, count = 0;
	int rd;
	(void) wr_stat;
	(void) s_len;

	if (file_from == NULL || file_to == NULL)
	{
		return (-1);
	}
	fd1 = open(file_from, O_RDONLY, S_IRUSR);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
		exit(99);
	}
	buff = malloc(sizeof(char) * s_len);
	rd = read(fd1, buff, s_len);
	while (count < 1025)
	{
		if (rd < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		dprintf(fd2, "%s", buff);
		if (rd < (int) s_len)
			break;
		rd = read(fd1, buff, s_len);
	}
	dprintf(STDOUT_FILENO, "Close res: %d\n", close(fd1));
	close(fd2);
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
	dprintf(STDOUT_FILENO, "-> %d)\n", _cp(argv[1], argv[2]));
	return (0);
}
