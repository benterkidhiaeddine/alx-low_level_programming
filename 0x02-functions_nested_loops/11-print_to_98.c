#include "main.h"


/**
 * _print_sign - print the sign of the number
 *
 * @n: the number to be inputed
 * Return: void
 */
void _print_sign(int n)
{
	if (n < 0)
		_putchar('-');
}



/**
 * _print_number - prints double digit numbers
 *
 * @n: number to be printed
 * Return: void
 *
 */
void _print_number(int n)
{

	if (n < 0)
		n = -n;

	if (n < 10)
	{
		_putchar('0' + n);
	}
	else if (n < 100)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else
	{

		_putchar('0' + (n / 100));
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + (n %  10));
	}
}
/**
 * print_to_98 - prints the number back to 98
 *
 * @n: number to begin counting up or down from
 * Return: void
 *
 */
void print_to_98(int n)
{

	int direction;

	if (n > 98)
		direction = -1;
	else
		direction = 1;

	while (n != 98)
	{
		_print_sign(n);
		_print_number(n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n += direction;
	}
	_print_number(n);
	_putchar('\n');
}
