#include "main.h"
/**
* print_line - functions that prints "_"
* n number of times
*
* @n: int - number of _ to be printed
* Return: void
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
