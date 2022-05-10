#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocated memory using malloc
 *
 * @b: memory to be allocated
 *
 * Return: pointer to allocated memory or 98 on fail
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
