#include "main.h"

/**
 * _abs - Entry Point
 * @n: the absolute value of an integer
 *Return: Always 0 (Sucess)
 */
int _abs(int)
{
	int n;
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (0);
}
