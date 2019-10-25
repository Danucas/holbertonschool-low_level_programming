#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void printj(unsigned char *s, ...)
{
	void *p;
	int i;
	long g;
	long minR;
	int y;
	char **f = (char **) &p + 6;
	char *b = (char *) *f;
	printf("%s\n", s);
	while (*s < 127 && *s >= 0)
	{
		s--;
	}
	minR = (long) s;
	printf("testing: minR: 0x%x\n", (int) minR);
	for (i = 0; i < 100; i++, f++)
	{
		printf("pos:  %d  %p\t%p\t", i, f, *f);
		g = (long) *f;
		y = (int) g;
		/*printf("minR: 0x%x actual: 0x%x\n",(int) minR, y);*/
		if (g > minR)
		{
		b = (char *) *f;
		if (b != NULL)
			if (*b != '\0')
				printf("%s", b);
		}
		else if (g != 0)
		{
			printf("%d", y);
		}
		printf("\n");
	}
}

int main(void)
{
	printj("Something", "hola", 1, 2, "Perro", 3, 4, "dsa");
	return (0);
}
