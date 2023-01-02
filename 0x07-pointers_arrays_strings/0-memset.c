#include "main.h"
#include <stdio.h>
/**
 * _memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @n: bytes of the memory area
 * @s: pointer
 * @b: constant byte
 * Return: pointer to the memory area  
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
