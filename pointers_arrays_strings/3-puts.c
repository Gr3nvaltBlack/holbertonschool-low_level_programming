#include "main.h"

/**
 *_puts - function that prints a string, followed by a new line
 *@str: pointer that traverses a character string.
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
