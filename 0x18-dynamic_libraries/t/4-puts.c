#include "holberton.h"

void _puts(char *string)
{
  write(stdout, string, _strlen(string));
}
