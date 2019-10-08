#include "holberton.h"
int getLength(char *s);
/**
 *print_chessboard - concatnate
 *@a: dest p
*Return: something
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
/**
*getLength - concatnate
*@s: dest pointer
*Return: something
*/

int getLength(char *s)
{
	int le = 0;

	while (*(s + le) != '\0')
	{
		le++;
	}
	return (le);
}
