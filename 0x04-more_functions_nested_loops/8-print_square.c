#include "main.h"
/**
 * _print_square_line - print n number of #
 * @n: int
 * Return : void
 */
void _print_square_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('#');
	}
}
/**
* print_square - functions that prints a square
* of size n
*
* @n: int - size of the square
* Return: void
*/
void print_square(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{

		_print_square_line(n);
		_putchar('\n');
	}
}
