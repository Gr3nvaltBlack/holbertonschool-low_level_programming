#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: variable that checks a digit
 * Return: Always 0 (Succes)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
