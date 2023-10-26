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

/**
 * _is_palindrome - this functions used start and end to recursivly
 * check for palindrome
 * @s: char*
 * @start: int - start of the string
 * @end: int - end of the string
 * Return: 1 if palindrome 0 otherwise
 */
int _is_palindrome(char *s, int start, int end)
{
	if (end < start)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (_is_palindrome(s, start + 1, end - 1));
}
/**
* is_palindrome - function that checks if a string is a palindrome
* @s: char*
* Return: int - 1 if string is a palindrom 0 otherwise
*/

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0)
		return (1);
	return (_is_palindrome(s, 0, len - 1));
}

