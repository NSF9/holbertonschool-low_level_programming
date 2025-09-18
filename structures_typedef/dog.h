#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog info
 *
 * @name: type char
 * @age: float type
 * @owner: char type
 *
 *Description: structure is storing dog information
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_st;

void init_dog(struct dog *MyDog, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
