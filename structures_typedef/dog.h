#ifndef DOG_H
#define DOG_H

/**
 *struct dog - a new type of data
 *representing a dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
