#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog object containing name , owner and age
 * @name: char* - name of the dog
 * @owner: char* - name of the owner
 * @age: float - age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
