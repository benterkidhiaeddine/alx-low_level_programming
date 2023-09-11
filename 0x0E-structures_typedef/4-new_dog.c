#include "dog.h"
/**
 * _strlen - length of str
 * @str: char* - str to count its length
 * Return: int - number of chars in str
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
* new_dog - function that creates a new dog strcut
* @name: char* - name of the dog
* @age: float - age of the dog
* @owner: name of the owner
* Return: dog_t* - pointer to the new the dog struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *dog_name, *owner_name;
	int i;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog_name = malloc(_strlen(name) + 1);
	if (dog_name == NULL)
	{

		free(dog);
		return (NULL);
	}
	owner_name = malloc(_strlen(owner) + 1);
	if (owner_name == NULL)
	{
		free(dog_name);
		free(dog);
		return (NULL);
	}
	i = 0;
	while (i < _strlen(name))
	{
		dog_name[i] = name[i];
		i++;
	}
	dog_name[i] = '\0';
	i = 0;
	while (i < _strlen(owner))
	{
		owner_name[i] = owner[i];
		i++;
	}

	owner_name[i] = '\0';
	dog->name = dog_name;
	dog->age = age;
	dog->owner = owner_name;
	return (dog);
}

