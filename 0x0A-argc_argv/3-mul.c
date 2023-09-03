#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point to te programme
* @argc:  variable count
* @argv:  variable array
* Return: always 0
*/
int main(int argc, char **argv)
{

	int i;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = 1;
	result = 1;
	while (i < argc)
	{
		result *= atoi(argv[i]);
		i++;
	}
	printf("%d\n", result);
	return (0);
}
