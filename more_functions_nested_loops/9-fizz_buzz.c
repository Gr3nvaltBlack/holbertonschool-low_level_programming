#include <stdio.h>

/**
 * main - Function that check the code
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int nbr;

	for (nbr = 1; nbr <= 100; nbr++)
	{
		if (nbr % 3 == 0 && nbr % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(32);
		}
		else if (nbr % 3 == 0)
		{
			printf("Fizz");
			putchar(32);
		}
		else if (nbr % 5 == 0)
		{
			printf("Buzz");
			putchar(32);
		}
		else
		{
			printf("%d", nbr);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
