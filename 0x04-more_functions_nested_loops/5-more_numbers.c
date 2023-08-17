#include "main.h"
/**
 * _print_number - this functions makes it possible
 * to print two digit numbers using _putchar
 * @n: int - number to be printed
 * Return: void
 */

void _print_number(int n)
{

	if (n >= 10)
	{
		_putchar('0' + n / 10);
	}
	_putchar('0' + n % 10);
}
/**
* more_numbers - print numbers 0 through 14
* 10 times
* Return: void
*/
void more_numbers(void)
{
	int number;
	int i;

	i = 0;

	while (i < 10)
	{
		number = 0;

		while (number <= 14)
		{
			_print_number(number);

			number++;
		}
		_putchar('\n');
		i++;
	}
}
