#include "main.h"

/**
* _puts - prints the string s followed by a new line
* @s: pointer to the first char in the string.
* Return: void
*
*/
void _puts(char *s)
{

	while (*s != '\0')
	{
		_putchar(*s);
		s = s + 1;
	}
	_putchar('\n');
}
