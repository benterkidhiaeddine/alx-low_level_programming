#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - create the amount of memory and returns the void pointer
* to it and handles faliure
* @b: unsigned int - number of bytes to be assigned
* Return: void* - on sucess void pointer with b byes allocated
* on faliure exit code 98
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
