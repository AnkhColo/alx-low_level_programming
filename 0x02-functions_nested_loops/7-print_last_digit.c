#include "main.h"
/**
 * print_last_digit - prints the last digit
 * of a number
 *
 * @n:input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int s;

	s = n % 10;
	if (s < 0)

		s *= -1;

	_putchar(ld + '0');

	return (0);
}
