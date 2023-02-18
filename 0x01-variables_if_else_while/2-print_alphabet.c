#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Discription: Get a rondom it with 5
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
