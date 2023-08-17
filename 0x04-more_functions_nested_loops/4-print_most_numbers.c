#include "main.h"
/**
* print_most_numbers - print numbers 0 through 9
* excepet 2 and 4
*
* Return: void
*/
void print_most_numbers(void)
{
	int digit;

	digit = 48;
	while (digit <= 57)
	{
		if (digit != 50 && digit != 52)
		_putchar(digit);

		digit++;
	}
	_putchar('\n');
}
