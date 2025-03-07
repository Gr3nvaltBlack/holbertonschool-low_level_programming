#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: The main string to search within.
 * @needle: The substring to locate within `haystack`.
 * Return: Haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
