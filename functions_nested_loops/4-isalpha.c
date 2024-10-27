#include "main.h"

/**
 * _isalpha - Entry Point
 * c -  This function prints the alphabet in lowercase
 * Return: Always 0 (Sucess)
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
