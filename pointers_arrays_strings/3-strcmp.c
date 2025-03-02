#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: Pointer to the first character in a string.
 * @s2: Pointer to the first character in a second string.
 * Return: value *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
