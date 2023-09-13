#include "function_pointers.h"
/**
* int_index - returns the index of the searched element in
* the array
* @array: int * - the int array we are searching in
* @size: size_t - the number of elemnts in the array
* @cmp: int(*)(int) - the function responsible for finding the elemnt
* returns 1 if element found
* Return: return the index of the elemnt in the array if the elemnt is found
* else -1
*/
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (cmp == NULL)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
