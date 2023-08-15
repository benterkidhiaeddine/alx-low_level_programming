#include "main.h"

/**
 * _print_number - prints double digit numbers
 *
 * @n: number to be printed
 * Return: void
 *
 */
void _print_number(int n)
{
	if (n < 10)
	{
		_putchar('0');
		_putchar('0' + 0);
	}
	else
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
}
/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 *
 *
 * Return: void
 *
 */
void jack_bauer(void)
{
	int hour;

	hour = 0;
	while (hour <= 23)
	{
		int minut;

		minut = 0;
		while (minut <= 59)
		{
			_print_number(hour);
			_putchar(':');
			_print_number(minut);
			_putchar('\n');
			minut++;
		}
		hour++;
	}

}
