#include "main.h"

/**
* _strlen - gets the length of a giver string excluding '\0
* @s: pointer to the first char in the string.
* Return: void
*
*/
int _strlen(char *s)
{
	int size;

	size = 0;
	while (*s != '\0')
	{
		size++;
		s = s + 1;
	}
	return (size);
}
/**
* print_rev - prints the string in reverse order
* @s: pointer to the first char in the string.
* Return: void
*
*/
void print_rev(char *s)
{
	int endindx;

	endindx = _strlen(s) - 1;

	while (endindx != -1)
	{
		_putchar(*(s + endindx));
		endindx--;
	}
	_putchar('\n');
}
