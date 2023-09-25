#include "main.h"
/**
* _strlen_recursion - gives the length of the string using
* recursion
* @s: char* - pointer to the beginning of the str
* Return: int - length of the str
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);

}
