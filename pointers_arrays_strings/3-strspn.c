#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to the string to be analyzed
 * @accept: pointer to a string containing the accepted characters
 * Return: count value
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int compt = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				compt++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (compt);
}
