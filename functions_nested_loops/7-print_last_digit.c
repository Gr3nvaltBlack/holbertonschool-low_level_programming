#include "main.h"

/**
 * print_last_digit - check the code
 * @n: fuction that prints a numbers
 * Return: Always 0 (Succes)
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (last_digit < 0)
last_digit = -last_digit;
_putchar(last_digit + '0');
return (last_digit);
}
