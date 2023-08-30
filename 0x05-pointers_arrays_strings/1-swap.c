#include "main.h"

/**
* swap_int - swaps the values of two integers a and b
* @a: pointer to the first number.
* @b: pointer to the seconds number.
* Return: void
*
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
