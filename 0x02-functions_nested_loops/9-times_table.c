#include "main.h"

/**
 * _print_number - prints double digit numbers
 *
 * @n: number to be printed
 * @is_first: int 0 or 1 means if it is the first number in
 * multiplication , put it alone without spaces
 * Return: void
 *
 */
void _print_number(int n, int is_first)
{
	if (is_first)
	{
		_putchar('0');
	}
	else if (n < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + n);
	}
	else
	{
		_putchar(' ');
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
}
/**
 * times_table - prints the time table from 0 through 9
 *
 *
 * Return: void
 *
 */
void times_table(void)
{
	int digit;

	digit = 0;
	while (digit <= 9)
	{
		int multiplier;

		multiplier = 0;
		while (multiplier <= 9)
		{
			int result;

			result = digit * multiplier;
			if (multiplier == 0)
			{
				_print_number(result, 1);
			}
			else
			{
			_print_number(result, 0);
			}
			if (multiplier != 9)
				_putchar(',');
			multiplier++;
		}
		_putchar('\n');
		digit++;
	}

}
