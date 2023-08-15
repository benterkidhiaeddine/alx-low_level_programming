#include "main.h"
/**
 * print_alphabet_x10 - prints the whole alphabet in lower case
 * followed by a new line 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char first = 97;

		while (first != 123)
		{
			_putchar(first);
			first++;
		}
		_putchar('\n');
		i++;
	}
}
