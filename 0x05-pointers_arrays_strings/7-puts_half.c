#include "main.h"

/**
* _strlen - gets the length of a giver string excluding '\0'
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
* puts_half - prints half the chars of  the string
* followed by a new line
* @s: pointer to the first char in the string.
* Return: void
*
*/
void puts_half(char *s)
{

	int len = _strlen(s);
	int beginindx;

	if (len % 2 == 0)
	{
		beginindx = len / 2;
	}
	else
	{
		beginindx = (len - 1) / 2;
	}
	/* set the begining of the pointer in the arr*/
	s = s + beginindx;
	while (*s != '\0')
	{
		_putchar(*s);
		s = s + 1;
	}
	_putchar('\n');
}

