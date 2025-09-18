#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 *
 * @MyDog: pointes to d dog info
 *
 * Return: Pointer to struct
 */

void print_dog(struct dog *MyDog)
{
if (MyDog == NULL)
return;
if (MyDog->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", MyDog->name);
printf("Age: %f\n", MyDog->age);
if (MyDog->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", MyDog->owner);
}
