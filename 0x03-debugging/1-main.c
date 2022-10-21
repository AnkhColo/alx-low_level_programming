#include <stdio.h>

/**
 *
 * * main - causes an infinite loop
 *
 * * Return: 0
 */

int main(void)
{
	int i;

	print("Infinite Loop incoming :(\n");

	i=0;

	while (i < 10) /* The infinte loop is caused here because i does not increment */
	{ 
		putchar (i);
	}

	print("Infinite loop avoided! \\o/\n");

	return (0);
}
