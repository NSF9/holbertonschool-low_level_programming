#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog Mydog;

    Mydog.name = "Poppy";
    Mydog.age = 3.5;
    Mydog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", Mydog.name, Mydog.age);
    return (0);
}
