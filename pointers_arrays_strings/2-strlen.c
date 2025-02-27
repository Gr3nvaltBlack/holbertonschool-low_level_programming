#include "main.h"

/**
 *  _strlen - function that returns the length of a string
 * @s: pointer of a string.
 * Return: compt
 */
int _strlen(char *s)
{
	int compt = 0;

	while (*s != '\0')
	{
		s++;
		compt++;
	}
	return (compt);
}
