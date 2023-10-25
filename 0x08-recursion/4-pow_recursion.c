#include "main.h"
/**
* _pow_recursion - function that returns x to the power of y
* @x: int
* @y: int
* Return: int
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
