#include "main.h"

/**
 * rev_string - function that reverses a string
 *@s: pointer for reverses a string.
 *
 */
void rev_string(char *s)
{
	int i;
	int len = 0;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
