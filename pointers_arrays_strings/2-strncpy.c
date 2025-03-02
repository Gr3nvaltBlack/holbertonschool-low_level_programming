#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: Pointer to the array where the string will be copied
 * @src: source string pointer
 * @n: number of characters
 * Return: dest characters
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
