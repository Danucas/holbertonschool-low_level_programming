#include "holberton.h"
/**
 *swap_int - swap values
 *@a: first
 *@b: second
 */
void swap_int(int *a, int *b)
{
	int tmpa = *a;
	int tmpb = *b;
	*a = tmpb;
	*b = tmpa;
}
