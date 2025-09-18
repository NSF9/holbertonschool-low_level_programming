#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: char type
 * @age: float type
 * @owner: char type
 *
 * Return: Pointer to struct dog_t (or NULL if fail)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int Length1 = 0, Length2 = 0, i;

	while (name[Length1])
		Length1++;
	Length1++;

	while (owner[Length2])
		Length2++;
	Length2++;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(Length1 * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < Length1; i++)
		newDog->name[i] = name[i];

	newDog->age = age;

	newDog->owner = malloc(Length2 * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < Length2; i++)
		newDog->owner[i] = owner[i];

	return (newDog);
}

