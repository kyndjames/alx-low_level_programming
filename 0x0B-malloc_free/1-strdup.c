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

	while (str[str_ln] != '\0')
	{
		str_ln++;
	}
	if (str[str_ln] == '\0')
	{
		return (NULL);
	}
	pointr = malloc(sizeof(char) * str_ln + 1);
	for (count = 0; pointr[count] != '\0'; count++)
		if (*pointr == '\0')
		{
			return (NULL);
		}
		pointr[count] = str[count];

/*	pointr[count] = '\0';
	return (pointr);*/
	return (str);
}
