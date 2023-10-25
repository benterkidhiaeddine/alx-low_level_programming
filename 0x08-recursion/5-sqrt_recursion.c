#include "main.h"
/**
 * _sqrt - this function tests weather a number n is the
 * squre root by multiplying by itself it's slow
 * and takes a  lot of memory and can give you only
 * natural number solutions
 * @start_number: int - number from where we start to gues
 * @n: int - the number we want the square root of
 * Return: int
 */
int _sqrt(int start_number, int n)
{
	if (start_number > n)
	{
		return (-1);
	}
	if (start_number * start_number == n)
	{
		return (start_number);
	}
	return (_sqrt(start_number + 1, n));
}
/**
* _sqrt_recursion - function that returns the natural sqrt of a number
* return -1 if no natural sqrt for the number is found
* @n: int
* Return: int
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(1, n));
}
