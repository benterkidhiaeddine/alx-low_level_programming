#include "dog.h"
/**
* free_dog - free the dog struct from memort
* @d: dog_t* - pointer to dog struct
* Return: void
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

