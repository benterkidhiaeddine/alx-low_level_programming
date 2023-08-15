#include "main.h"

/**
 * _isalpha - This function checkes weather a char is alphabetic
 *
 * @c: int type  ascii value of the char that we want to test
 *
 * Return:  if the char is lower case , 0 otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
