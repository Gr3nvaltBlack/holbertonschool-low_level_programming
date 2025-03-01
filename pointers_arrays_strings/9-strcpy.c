#include "main.h"

/**
 * _strcpy -  function that copies the string pointed
 * @dest: pointer that copies a string
 * @src: pointer that points to a string
 * Return: a char pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
