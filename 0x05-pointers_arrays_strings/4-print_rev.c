#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 * return: void
 */
void print_rev(char *s)
{
	int w = 0;

	while (w >= 0)
	{
		if (s[w] == '\0')
			break;
		w++;
	}

	for (w--; w >= 0; w--)
		_putchar(s[w]);
	_putchar('\n');
}
