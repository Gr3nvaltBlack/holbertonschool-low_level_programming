#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: pointer to the first character of the array
 * Return: s char
 */
char *cap_string(char *s)
{
	int i = 0, j;
	int new_word = 1;

	char separators[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (new_word && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			new_word = 0;
		}
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] == separators[j])
			{
				new_word = 1;
				break;
			}
		}
		i++;
	}
	return (s);
}
