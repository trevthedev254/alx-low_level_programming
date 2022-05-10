#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maiximum value 
 *
 * Return: pointer to created array of NULL if min>max or NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max);
	{
		retutn (NULL);
	}

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p = NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}

	return (p);
}
