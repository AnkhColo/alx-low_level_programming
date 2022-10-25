#include "main.h"

/**
 * strlen - gives the lenght of a string
 * Return 0 Success
 */

int _strlen(char *s)
{
	int y = 0;

	while (*(s + y) != '\0')
		y++;
	return (y);
}
