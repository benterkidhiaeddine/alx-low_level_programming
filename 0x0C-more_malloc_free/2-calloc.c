#include "main.h"
/**
* _calloc - allocates nmemb number of elemennts of size size
* @nmemb: unsigned int - number of membres of cosen size we want to assing
* memory to
* @size: unsigned int - size of element
* Return: void* - pointer to the memory allocation
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	result = malloc(nmemb * size);
	if (result == NULL)
	{
		return (NULL);
	}
	return (result);
}
