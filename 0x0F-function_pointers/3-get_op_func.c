#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *get_op_func - description
 *@s: option
 *Return: pointer to the option
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (ops[i].op != NULL && *(s) == ops[i].op[0])
			break;

		i++;
	}
	return (ops[i].f);
}
