#include "main.h"

/**
 * _pow_recursion - Calculate the power of x raised | y.
 * @x:  base.
 * @y: L'exposant.
 *
 * Return: The result of x^y, or -1 if y is less than | 0 (error).
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
