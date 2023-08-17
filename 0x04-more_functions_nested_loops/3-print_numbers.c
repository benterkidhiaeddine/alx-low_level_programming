#include "main.h"
/**
* print_numbers - print numbers 0 through 9
*
* Return: void
*/
void print_numbers(void)
{
	int digit;

	digit = 48;
	while (digit <= 57)
	{
		_putchar(digit);
		digit++;
	}
	_putchar('\n');
}
