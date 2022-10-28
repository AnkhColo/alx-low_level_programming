#include "main.h"

/**
 * _char *_strcat - concatenates two strings
 * @dest: string to be concatenated
 * @src: strings to be concatenated
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{

	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
