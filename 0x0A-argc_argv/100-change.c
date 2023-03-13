#include <stdlib.h>
#include "main.h"

/**
* main - prints the minimum number of coins to
* make change for an amount of money
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])
{
Int num, j, result;
Int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf(“Error\n”);
return (1);
}

