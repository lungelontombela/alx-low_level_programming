#include "main.h"

/**
 * _abs - compute the absolute value of integer
 * @c: the number to be compute with
 * Return: Absolute value of numbers or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	 return (c);
}
