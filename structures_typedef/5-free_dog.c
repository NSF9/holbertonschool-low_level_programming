#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free
 *
 * @MyDog: struct
 *
 * Return: void
 */

void free_dog(dog_t *MyDog)
{
if (MyDog == NULL)
return;

free(MyDog->owner);
free(MyDog->name);
free(MyDog);
}
