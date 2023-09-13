#include "calc.h"
/**
* main - entry point to the programme
* Usage: ./calc num1 operator num2
* @argc: number of args
* @argv: array of arrgs
* Return: 0
*/
int main(int argc, char **argv)
{

	int a, b, result;
	int (*op_func)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Incorrect number of args Error\n");
		return (98);
	}

	operator = argv[2];
	op_func = get_op_func(operator);
	if (op_func == NULL)
	{
		printf("Invalid operator Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
