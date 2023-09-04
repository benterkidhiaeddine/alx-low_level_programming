#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array with a specific size , that contains
* a specific char in each of its positions
* @size: unsigned int - the size of the array
* @c: char - the char that fills the array
* Return: char* the pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *created_array;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	created_array = malloc(sizeof(char) * size);
	if (created_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		created_array[i] = c;
	}
	return (created_array);
}
