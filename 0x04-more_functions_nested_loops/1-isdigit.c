#include "main.h"
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
