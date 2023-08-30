#include "main.h"

/**
* puts2 - prints every other char of the string
* @str: pointer to the first char in the string.
* Return: void
*
*/
void puts2(char *str)
{

	while (*str != '\0')
	{
		if (*(str + 1) == '\0')
		{
			_putchar(*str);
			break;
		}
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
