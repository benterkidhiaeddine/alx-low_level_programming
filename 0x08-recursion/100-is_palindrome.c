#include "main.h"
/**
 * _strlen - reutrn the length of a str
 * @s: char* -
 * Return: int - length of str
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while ((*s) != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
/**
* is_palindrome - function that checks if a string is a palindrome
* @s: char*
* Return: int - 1 if string is a palindrom 0 otherwise
*/

int is_palindrome(char *s)
{
	int len, i;

	len = _strlen(s);
	if (len % 2 == 0)
	{
		for (i = 0; i < len / 2; i++)
		{
			if (s[i] != s[len - 1 - i])
			{
				return (0);
			}
		}
	}
	else
	{
		for (i = 0; i < (len / 2) - 1; i++)
		{
			if (s[i] != s[len - 1 - i])
			{
				return (0);
			}
		}
	}
	return (1);
}
