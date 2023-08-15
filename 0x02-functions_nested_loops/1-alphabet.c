#include "main.h"
/**
 * print_alphabet - prints the whole alphabet in lower case
 * followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char first = 97;

	while (first != 123)
	{
		_putchar(first);
		first++;
	}
	_putchar('\n');

}
