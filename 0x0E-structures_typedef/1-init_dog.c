#include "dog.h"

/**
 * init_dog - initilizes dog variaable
 * my_dog - name of the dog
 * @d: struct pointer
 * @name: dog's name
 * @age: Dog's age
 * @owner: Julien
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;
	d = &my_dog;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
