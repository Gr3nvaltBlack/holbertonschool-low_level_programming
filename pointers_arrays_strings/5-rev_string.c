#include "main.h"

/**
 * rev_string - function that reverses a string
 *@s: pointer for reverses a string.
 *
 */
void rev_string(char *s)
{
	int i = 0;
	char *rev = s;

	while (rev[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(rev[i]);
		i--;
	}
	_putchar(10);
}
