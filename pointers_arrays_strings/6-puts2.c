#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: a pointer that traverses a string
 *
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar(10);
}
