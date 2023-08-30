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
* rev_string - reverse a string in place
* @s: pointer to the first char in the string.
* Return: void
*
*/
void rev_string(char *s)
{
	int endindx;
	int size;
	int i;

	size = _strlen(s);
	endindx = size - 1;
	i = 0;

	while (i < (endindx / 2))
	{
		char tmp;

		tmp = *(s + endindx - i);
		*(s + endindx - i) = *(s + i);
		*(s + i) = tmp;
		i++;
	}
}
