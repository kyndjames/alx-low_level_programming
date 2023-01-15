#include "main.h"
/**
 * str_ln - string length
 * @str: string
 * @len: length of string
 * Return: count
 */
int str_ln(char *str, int len)
{
	if (*str == 0)
	return (len - 1);
	return (str_ln(str + len, len + 1));
}
/**
 * str_ln2 - compares string vs string reverse
 * @str: string
 * @len: length
 * Return: On success 1
 */
int str_ln2(char *str, int len)
{
	if (*str != *(str + len))
	return (1);
	else
	return (0);
	return (str_ln2(str + 1, len - 1));
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int len;

	len = str_ln(s, 0);
	return (str_ln2(s, len));
	return (0);
}
