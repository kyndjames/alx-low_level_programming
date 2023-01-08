#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 */
int _strlen_recursion(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; ++count);
	return (count);
}
