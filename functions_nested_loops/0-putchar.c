#include <stdio.h>
#include "main.h"
/**
 *main - Entry Point
 *
 *Return: Always 0 (Sucess)
 */
int main(void)
{
char n[] = "_putchar";
int i;
for (i = 0; n[i] != '\0'; i++)
{
_putchar(n[i]);
}
_putchar('\n');
return (0);
}
