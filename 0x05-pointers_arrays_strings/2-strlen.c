#include "main.h"

/**
 * _strlen - gives the lenght of a string
 * @s: string return
 * Return: length of a string
 */

int _strlen(char *s)
{
	int y = 0;

	while (*(y + s) != '\0')
		y++;
	return (y);
}
