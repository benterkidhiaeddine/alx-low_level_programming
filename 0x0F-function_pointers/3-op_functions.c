#include "calc.h"
/**
* op_add - adds two numbers
* @a: int
* @b: int
* Return: a + b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - subsrtract second number from first
* @a: int
* @b: int
* Return: a - b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - multiply two numbers
* @a: int
* @b: int
* Return: a * b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - divide first number by second
* @a: int
* @b: int
* Return: a / b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - give the remainder of the division of a by b
* @a: int
* @b: int
* Return: a % b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
