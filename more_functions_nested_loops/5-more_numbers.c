#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 *
 *Return: Always 0.
 */
void more_numbers(void)
{
	int c;
	int i;

	for (c = 0 ; c <= 10 ; c++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i >= 10)
			{
				_putchar(1);
				_putchar(0 + (i % 10));
			}
			else
			{
				_putchar(i + 0);
			}
		}
	}

}
