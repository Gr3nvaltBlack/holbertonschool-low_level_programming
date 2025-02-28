#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: pointer that prints a string in reverse
 *
 */
void print_rev(char *s)
{
	char *rts = s;

	while (*rts != '\0')
	{
		rts++;
	}
	rts--;
	while (rts >= s)
	{
		_putchar(*rts);
		rts--;
	}
	_putchar(10);
}
