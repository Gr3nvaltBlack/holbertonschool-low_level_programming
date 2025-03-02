#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: first string pointer that receives the string src
 * @src: second string pointer
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
