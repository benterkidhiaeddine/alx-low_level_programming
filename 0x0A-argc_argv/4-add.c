#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	i = 1;
	result = 0;
	while (i < argc)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
		i++;
	}
	printf("%d\n", result);
	return (0);
}
