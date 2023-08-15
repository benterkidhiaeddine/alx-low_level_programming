#include "main.h"

/**
 * _abs - This function returns the absolut value
 * of the number passed to it.
 *
 * @n: the number passed to the function
 *
 * Return:  n  if n is greater than 0 , -n if n is less than 0 , 0 otherwise
 *
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else if (n < 0)
		return (-n);
	return (0);
}
