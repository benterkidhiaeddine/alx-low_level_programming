#include "main.h"

/**
 * print_last_digit - This function prints the last digit
 * of a number.
 *
 * @n: the number passed to the function
 *
 * Return: return the last digit of the number
 *
 */
int print_last_digit(int n)
{
	int lst_digit;

	lst_digit = n % 10;
	if (lst_digit < 0)
		lst_digit = -1 * lst_digit;
	_putchar('0' + lst_digit);
	return (lst_digit);
}
