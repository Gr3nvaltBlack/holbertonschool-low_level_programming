#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer that concatenates two strings
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	conc = malloc((len1 + len2 + 1) * sizeof(char));
	if (conc == NULL)
	{
		return (NULL);
	}

	for (; i < len1; i++)
	{
		conc[i] = s1[i];
	}
	for (; j < len2; j++)
	{
		conc[i + j] = s2[j];
	}
	conc[i + j] = '\0';

	return (conc);
}
