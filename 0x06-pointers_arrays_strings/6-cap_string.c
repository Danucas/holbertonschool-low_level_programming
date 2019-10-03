#include "holberton.h"
#include <stdbool.h>
int getLength(char *s);
void compare(char *s, char *comp, int pos, int comp_pos, int len);
/**
 *cap_string - concatnate
 *@s: dest pointer
 *Return: something
 */
char *cap_string(char *s)
{
	int pos = 0;
	int comp_pos = 0;
	char comp[] = {9, 10, 11, 32, 33, 46, 44, 59, 63, 34, 40, 41, 123, 125};
	int len = getLength(comp);

	while (*(s + pos) != '\0')
	{
		if (s[pos] >= 97 && s[pos] <= 122)
		{
			if (pos == 0)
				s[pos] -= 32;
			else
				compare(s, comp, pos, comp_pos, len);
		}
		pos++;
	}
	return (s);
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
/**
 *compare -compare
 *@s:dsa
 *@comp: dsa
 *@pos: dsa
 *@comp_pos: dsad
*@len:dsada
*/
void compare(char *s, char *comp, int pos, int comp_pos, int len)
{
	bool should_cap = false;

	for (comp_pos = 0; comp_pos < len; comp_pos++)
	{
		if (s[pos - 1] == comp[comp_pos])
		{
			if (s[pos - 1] == '\t')
				s[pos - 1] = ' ';
			should_cap  = true;
		}
	}
	if (should_cap)
		s[pos] -= 32;
}
