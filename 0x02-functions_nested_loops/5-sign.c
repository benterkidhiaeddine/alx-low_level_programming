#include "main.h"

/**
 * print_sign - This function prints the sign of the number passed to it
 *
 * @n: the number passed to the function so we can check its sign
 *
 * Return:  1 if n is greater than  , -1 if n is less than 0 , 0 otherwise
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
