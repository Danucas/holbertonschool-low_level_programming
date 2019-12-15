#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
/**
 *gen_random_list - gen list
 *Return: random list
 */
char *gen_random_list()
{
	unsigned int list_size = 0, list_pos = 0;
	char *list;
	int pos;

	list_size += (57 - 48 + 1);
	list_size += (90 - 65 + 1);
	list_size += (122 - 97 + 1);
	list = malloc(sizeof(char) * (list_size + 1));

	for (pos = 'a'; pos <= 'z'; pos++)
	{	list[list_pos] = pos;
		list_pos++;
	}
	for (pos = 'A'; pos <= 'Z'; pos++)
	{	list[list_pos] = pos;
		list_pos++;
	}
	for (pos = '0'; pos <= '9'; pos++)
	{	list[list_pos] = pos;
		list_pos++;
	}
	list[list_pos] = '\0';
	return (list);
}
/**
 *random_num - gen list
 *@list: the list
 *Return: random number
 */
int random_num(char *list)
{
	int length = 62;
	int random_number;
	int seed = 9, i;

	for (i = 0; i < seed; i++)
	{
		random_number = rand() % (length + 1);
	}
/*	printf("Random number %u char: %c\n", random_number, list[random_number]);*/
	return (list[random_number]);
}
/**
 *gen_key - gen list
 *@username: the list
 *Return: random number
 */
char *gen_key(char *username)
{
	unsigned int user_sum = 0;
	unsigned int pos = 0;
	unsigned int key_sum = 0;
	char *buff = malloc(1024);
	int b_pos = 0;
	int random_c;
	char *randmlist;

	while (username[pos] != '\0')
	{
		user_sum += username[pos];
		pos++;
	}
	pos = 0;
	randmlist = gen_random_list();
/*	printf("user sum: %d\n", user_sum);*/
	key_sum = 0;
	while (key_sum < user_sum)
	{
		random_c = random_num(randmlist);
		key_sum += random_c;
/*		printf("sum = %u\n", key_sum);*/
		buff[b_pos] = random_c;
		b_pos++;
		if (key_sum > user_sum)
		{
			free(randmlist);
			free(buff);
			return (gen_key(username));
		}
		else if (key_sum == user_sum)
		{
			buff[b_pos] = '\0';
/*			printf("key_sum: %d\n", key_sum);*/
			break;
		}
	}
	(void) random_c;
	free(randmlist);
	return (buff);
}
/**
 *main - gen list
 *@ac: the list
 *@argv: arguments
 *Return: random number
 */
int main(int ac, char **argv)
{
	char *key;

	if (ac != 2)
	{
		return (1);
	}
	else
	{
		srand(time(0));
		key = gen_key(argv[1]);
/*		printf("\tUsername %s\n\tGEN_KEY: %s\n", argv[1], key);*/
		printf("%s", key);
		free(key);
	}
	return (0);
}
