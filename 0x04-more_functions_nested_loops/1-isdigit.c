#include "main.h"
/**
 *_isdigit - that checks for a digit
 * @c: digits
 * Rreturn: 0 or 1
 */
int _isdigit(int c)
{
	int c;

	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
