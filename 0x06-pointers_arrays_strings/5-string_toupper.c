#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: pointers
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (i >= 'a', i <= 'z', i++)
			n[i] = n[i] - 32;
			i++;
	}
	return (n);
}


