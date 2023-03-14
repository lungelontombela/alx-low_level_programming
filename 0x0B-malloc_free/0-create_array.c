#include "main.h"
#include <stdli.h>

/**
 * create_array - create arrays of size and assign char
 *
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsined int size, char c)

{
	char *str;
	unsigned int i;

	str - malloc(sizeof(char) * size);
	if (size ==  0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
