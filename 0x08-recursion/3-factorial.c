#include "main.h"
/**
* factorial - return the factorial of a give number
* @n: int
* Return: int
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
