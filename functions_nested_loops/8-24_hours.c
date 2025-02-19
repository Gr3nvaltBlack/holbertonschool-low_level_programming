#include "main.h"
/**
 * jack_bauer -  check the code
 *
 *
 * Return: Always 0 (Succes).
 */
void jack_bauer(void)
{
	int heure = 0;
	int minute = 0;

	while (heure < 24 && minute < 60)
	{
		_putchar((heure / 10) + '0');
		_putchar((heure % 10) + '0');
		_putchar(':');
		_putchar((minute / 10) + '0');
		_putchar((minute % 10) + '0');
		_putchar('\n');
		minute++;
		if (minute == 60)
		{
			minute = 0;
			heure++;
		}
	}
}
