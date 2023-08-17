#include "main.h"
/**
* _isupper - functions determines if a letter is upper case
*  or not
*  @c: char - preferably be alpha otherwise it will return 0
*  Return: 1 if letter is upper case , 0 otherwise
*/
int _isupper(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
