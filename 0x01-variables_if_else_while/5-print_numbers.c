#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Discription: prints all sing digit with base 10
 * starting from 0, follow by new line
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

