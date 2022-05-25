#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of the list
 * @h: pointer to the start of the list
 *
 * Return: Number of nodes on the list
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
