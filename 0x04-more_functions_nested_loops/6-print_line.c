#include "main.h"

/**
 * print_line - prints a straight line using '-'
 * @n: the number of '_' to be printed
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
			_putchar('_');
	}

	_putchar('\n');
}
