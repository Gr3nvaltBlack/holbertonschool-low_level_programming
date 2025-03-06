#include "main.h"

/**
 * _memset - function that fills memory
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to use for padding
 * @n: the number of bytes to fill
 * Return: s char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
