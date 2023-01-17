#ifndef __DOG_H__
#define __DOG_H__
/**
 * struct dog - struct with dog elemnets
 * @name: name of the dog
 * @owner: Whoever owns the dog
 * @age: no of years since the dog was born
 */


typedef struct dog dog_t;

/**
 * dog_t - typedef for struct dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
