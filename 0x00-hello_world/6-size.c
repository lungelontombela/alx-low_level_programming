#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	// sizeof evaluates the size of a variable
	printf("sizeof of int: %zu bytes\n", sizeof(intType));
	printf("sizeof of float: %zu bytes\n", sizeof(floatType));
	printf("sizeof of double: %zu bytes\n", sizeof(doubleType));
	printf("sizeof of char: %zu bytes\n", sizeof(charType));

	return (0);
}
