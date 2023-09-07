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
	char *final;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	final = malloc(nmemb * size);
	if (final == NULL)
	{
		return (NULL);
	}
	
	i = 0;
	while (i < nmemb)
	{
		final[i] = 0; 
		i++;
	}

	return (final);
}
