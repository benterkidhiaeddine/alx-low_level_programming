#include "main.h"

/**
 * _islower - This function checkes weather a char is lower case
 *
 * @c: int type  ascii value of the char that we want to test
 *
 * Return: 0 if the char is upper case , 1 if the char is lower case
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
