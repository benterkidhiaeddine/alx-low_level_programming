#include "main.h"
/**
 * _print_spaces - print n number of spaces
 * @n: int
 * Return : void
 */
void _print_spaces(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
}
/**
* print_diagonal - functions that prints "\"
* n number of times
*
* @n: int - number of \ to be printed
* Return: void
*/
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		if (i >= 1)
			_print_spaces(i);

		_putchar('\\');

		_putchar('\n');
	}
}
