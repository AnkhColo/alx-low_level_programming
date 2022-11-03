#include <unistd.h>
/**
 * _putchar - prints character c to stdout
 * @c: character to be printed
 * Return: 1 On Success
 * On error return -1 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

