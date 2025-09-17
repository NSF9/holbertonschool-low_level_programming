#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to allocated memory
 * If malloc fails, exit with status 98
 */
void *malloc_checked(unsigned int b)
{
    void *Pointer;

    Pointer = malloc(b);

    if (Pointer == NULL)
        exit(98);

    return (Pointer);
}

