#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two string, using at most n bytes from src
 * @dest: pointer to the destination string
 * @n: maximum number of bytes to use from src
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
