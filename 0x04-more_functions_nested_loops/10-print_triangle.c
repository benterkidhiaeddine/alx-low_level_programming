#include "main.h"
/**
* _print_symbol - print a row of symbol
*
* @n: int
* @c: char
* Reutrn void
*/
void _print_symbol(int n, char c)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(c);
	}
}
/**
* print_triangle - prints a triangle of height n
*
* @n: int
*
* Return: void
*/
void print_triangle(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_print_symbol(n - i, ' ');
		_print_symbol(i, '#');
		_putchar('\n');
	}
}
