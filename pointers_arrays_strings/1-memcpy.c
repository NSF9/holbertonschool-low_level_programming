#include "main.h"

/**
 * _memcpy - Copy memory index
 * @dest: pointer to copy memory from source
 * @src: pointer to inital memory to compy from
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char* _memcpy(char* dest, char* surc, unsigned int num)
{

	unsigned int i;

for (i = 0; i < num;i++)
{
    dest[i] = surc[i];
}

return (dest);

}
