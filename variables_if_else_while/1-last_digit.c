#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
printf("%d and is greater than 5\n", n);
else if (n == 0)
printf("%d and is 0\n", n);
else
printf("%d and is less than 6 and not 0\n", n);

return (0);
}

