#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED
#include <stdio.h>
/**
 * struct dog - new type
 * @name: member 1
 * @age: member 2
 * @owner: menher 3
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
