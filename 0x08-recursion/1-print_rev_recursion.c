#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: reversed string
 * Return: s
 */
void _print_rev_recursion(char *s)
{
	if (*s =='\0')
		_putchar('\n');
	return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
