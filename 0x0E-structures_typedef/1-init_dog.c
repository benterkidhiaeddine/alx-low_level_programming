#include <stdlib.h>
#include "dog.h"
/**
* init_dog - sets the composing variables of the dog struct
* @d: dog* - pointer to the dog stcut we want to init
* @name: char* - name of the dog
* @age: float - age of the dog
* @owner: char* - name of the owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit(1);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
