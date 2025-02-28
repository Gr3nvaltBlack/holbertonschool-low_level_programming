#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: a pointer that traverses a string
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar(10);
}
