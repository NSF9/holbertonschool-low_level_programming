#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @MyDog: pointes to struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This function initializes the members of a struct dog
 *              with the provided values.
 */
void init_dog(struct dog *MyDog, char *name, float age, char *owner)
{
	if (MyDog)
	{
	MyDog->name = name;
	MyDog->age = age;
	MyDog->owner = owner;

	}
}
