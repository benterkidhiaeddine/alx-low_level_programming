#include "variadic_functions.h"
/**
* sum_them_all - a functions that returns the sums of
* the numbers passed to it
* @n: const unsigned int - number of arguments passed
* to the function
* Return: int - sum of all args , 0 when n nis 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
