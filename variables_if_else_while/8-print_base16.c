#include <stdio.h>

/**
* main - Entry Point
*
*Return: Always 0 (Sucess)
*/
int main(void)
{
char n = '0';
char lettre = 'a';
while (n <= '9')
{
putchar(n + '0');
n++;
}
while (lettre <= 'f')
{
putchar(lettre);
lettre++;
}
putchar('\n');
return (0);
}
