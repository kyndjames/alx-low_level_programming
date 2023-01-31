#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **twodim;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);
	twodim = malloc(sizeof(int *) * height);

	if (twodim == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		twodim[hgt_index] = malloc(sizeof(int) * width);

		if (twodim[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(twodim[hgt_index]);
			free(twodim);
			return (NULL);
		}
	}
	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			twodim[hgt_index][wid_index] = 0;
	}
	return (twodim);
}
