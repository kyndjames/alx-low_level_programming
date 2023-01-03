#include "main.h"
/**
 * _memcpy -  copies memory area
 * @dest: the required memory to store
 * @src: the coppied memory
 * @n: size
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
