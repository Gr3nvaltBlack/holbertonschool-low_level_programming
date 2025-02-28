#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: a pointer that traverses a string
 *
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
