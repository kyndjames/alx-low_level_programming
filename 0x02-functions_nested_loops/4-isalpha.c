#include "main.h"
/**
 * _isalpha ->  checks for alphabetic characte
 * @c: a character on the aphabet
 *
 * Return: returns 0 or 1 depending on conditions
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
