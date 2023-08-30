#include "main.h"
#include <stdio.h>
/**
* print_array - print the first n numbers of the given array.
* @a: array of integers
* @n: number of ints to be printed
* Return: void
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", *(a + i));
			break;
		}
		printf("%d, ", *(a + i));
		i++;
	}
	printf("\n");
}
