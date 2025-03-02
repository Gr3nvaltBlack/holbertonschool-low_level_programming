#include "main.h"

/**
 * string_toupper - function that changes lowercase to uppercase
 * @s: pointer to the first character of the array
 * Return: s uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
