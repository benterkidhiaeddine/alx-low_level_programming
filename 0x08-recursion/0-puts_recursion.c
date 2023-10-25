#include "main.h"
/**
* _puts_recursion - function that prints a string using recursion
* followed by a new line
* @s: char* - string to printed
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else 
	{	
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
