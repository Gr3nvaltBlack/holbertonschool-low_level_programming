#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *@s: pointer that displays the numbers in the string
 *Return: nomber * sign
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, nb = 0, found_number = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		{
			i++;
			continue;
		}
		else if (s[i] == '-' || s[i] == '+')
		{
			if (found_number)
				break;
			if (s[i] == '-')
				sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			nb = (nb * 10) + (s[i] - '0');
			found_number = 1;
		}
		else
		{
			if (found_number)
				break;
		}
		i++;
	}

	return (nb * sign);
}
