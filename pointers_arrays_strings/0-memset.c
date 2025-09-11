#include "main.h"

/**
 * memset - fills memory many of bytes
 * @Array: pointes to index
 * @b: write a byte here 
 * @n: number of bytes
 *
 * Return: array 
 */
char* _memset(char* Array, char Bytes, unsigned int num)
{
    unsigned int i;

    for (i = 0; i < num; i++)
    {
        Array[i] = Bytes;

    }

    return (Array);

}
