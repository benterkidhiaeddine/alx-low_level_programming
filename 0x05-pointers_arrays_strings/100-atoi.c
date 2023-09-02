#include <stdio.h>
/**
* _isdigit - functions determines if a digit 0 - 9
*  or not
*  @c: char
*  Return: 1 if digit , 0 otherwise
*/
int _isdigit(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
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
* _atoi - convert a string to an integer
* @s: char* - the string to be converted to an int
* respecting signs
* Return: int - result of the conversion
*/
int _atoi(char *s)
{
	int i;
	int number_sign;
	int sum;
	int len;

	sum = 0;
	number_sign = 0;
	len = _strlen(s);
	for (i = 0; i < len; i++)
	{
		if (!_isdigit(s[i]))
		{
			if (s[i] == '-')
				number_sign--;
			else if (s[i] == '+')
				number_sign++;
		}
		else
			break;
	}
	for (; _isdigit(s[i]); i++)
	{
		sum = sum * 10 + (s[i] - '0');
	}
	if (number_sign < 0)
		return (-1 * sum);
	return (sum);
}


