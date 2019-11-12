#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *read_textfile - read a file
 *@filename: the file
 *@letters: amount of letters
 *Return: letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0;
	int fd, write_stat;
	char *buff = malloc(sizeof(char) * letters);

	if (!buff)
		return (0);

	if (filename == NULL)
	{
		free(buff);
		return (0);
	}
	fd = open(filename, O_RDONLY, S_IRUSR);
	if (fd < 0)
	{
		free(buff);
		return (0);
	}
	count = read(fd, buff, letters);
	if (count < 0)
	{
		free(buff);
		return (0);
	}
	write_stat = write(STDOUT_FILENO, &buff[0], count);
	if (write_stat != count || write_stat == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (count);
}
