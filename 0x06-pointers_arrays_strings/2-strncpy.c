#include "main.h"
/**
 * _strncpy - function that concatenates two strings
 * @dest: frst param
 * @src: 2nd param
 * @n: 3rd param
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
