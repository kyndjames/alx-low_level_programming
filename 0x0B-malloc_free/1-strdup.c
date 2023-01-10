#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be coppied
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *pointr;
	int str_ln = 0;
	int count;
	
	for (str_ln = 0; str[str_ln] != '\0'; str_ln++)
	{
		str_ln++;
	}
	pointr = malloc(sizeof(char) * str_ln + 1);
	if (pointr == NULL)
	{
		return (NULL);
	}
	for (count = 0; pointr[count] != '\0'; count++)
	{
		pointr[count] = str[count];
	}
	return (pointr);
}
