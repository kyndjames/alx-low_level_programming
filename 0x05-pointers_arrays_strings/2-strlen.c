#include "main.h"
/**
 * strlen - returns the length of a string.
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int s;
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}

