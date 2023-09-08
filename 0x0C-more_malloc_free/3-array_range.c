#include "main.h"
/**
* array_range - function  that return an array of numbers between
* min and max included
* @min: int - minimum number
* @max: int - max number
* Return: int* - array of ints between min and max inclusive
*/
int *array_range(int min, int max)
{
	int *result;
	int i, size;



	if (max < min)
		return (NULL);
	size = (max - min) + 1;
	result = malloc(size * sizeof(int));
	if (result == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
