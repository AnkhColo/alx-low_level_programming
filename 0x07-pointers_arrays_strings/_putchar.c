#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 *  @c: character to print
 *
 *  Return: 0n success 1
 *  On error return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
