#include "main.h"
#include <stdio.h>


/**
 *_isupper - checks for uppercase character
 *@c: variable that counts capital letters
 *Return: Always 0 (Succes)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
