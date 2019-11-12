#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *create_file - read a file
 *@filename: the file
 *@text_context: amount of letters
 *Return: letters printed
 */

int create_file(const char *filename, char *text_context)
{
	int fd, ret = 1, wr_stat;
	size_t s_len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
/*	printf("filedes: %d\n", fd);*/
	fd = open(filename, O_WRONLY | O_CREAT, S_IWUSR | S_IRUSR);
	if (fd < 0)
		return (-1);
/*	printf("filedes: %d %s\n", fd, text_context);*/
	if (text_context != NULL)
	{
		while (*(text_context + (s_len)) != '\0')
			s_len++;
		wr_stat = write(fd, text_context, s_len);
		if (wr_stat == -1)
		{
			close(fd);
			return (-1);
		}
		ret = 1;
	}
	else
	{
		ret = 1;
	}
	close(fd);
	return (ret);
}
