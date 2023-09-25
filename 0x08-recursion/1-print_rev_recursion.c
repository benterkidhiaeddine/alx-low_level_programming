#include "main.h"
/**
 * _puts_reversed - function that takes a char pointer at the end
 * and prints until it encounters '\n'
 * @s: char* - pointer to the last char in the string
 * Return void
 */
void _puts_reversed(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_reversed(s - 1);
}

/**
* _print_rev_recursion - function that prints the string in
* reverse using recursion
* @s: string
* Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_puts_reversed(s);
		return;
	}
	_print_rev_recursion(s + 1);
}
