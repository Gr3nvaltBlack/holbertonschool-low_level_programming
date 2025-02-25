#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: variable for size of the triangle
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(32);
			}
			for (k = 1; k <= i; k++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
