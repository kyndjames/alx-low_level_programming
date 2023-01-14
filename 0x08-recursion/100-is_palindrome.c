#include "main.h"
/**
 * str_ln - string length
 * @str: string
 * Return: count
 */
int str_ln(char str[])
{
	int count = 0, i = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	return (count);
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int middle, i, len;
	char *str;

	str = s;
	len = str_ln(s);
	middle = len / 2;
	for (i = 0; i < middle; i++)
		if (str[i] != str[len - i - 1])
			return (0);
	return (1);
}
