#include "function_pointers.h"
/**
* array_iterator - function that executes another function on
* the array of type int
* @array: int* - array of type int
* @size: size_t - the size of the array
* @action: void(*)(int) - function to be executed on each element of the array
*/
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (action == NULL)
	{
		exit(1);
	}

	if (array == NULL)
	{
		exit(2);
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
