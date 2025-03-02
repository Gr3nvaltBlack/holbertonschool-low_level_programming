#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: a pointer pointing to a string
 * @src: a pointer pointing to the source string
 * @n: the maximum number of characters to append from src to dest
 * Return: a pointer to the resulting destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
