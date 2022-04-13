#include <stdio.h>

/**
 * main - print first fifty fibonnacci numbers
 *
 * Return: Fibonnaci numbers
 */
int main(void)
{
	int i = 1;
       	int j = 2;
       	int next = 0;

	printf("%d, %d, ", i , j);
	next = i + j;

	while (next <= 50)
	{
		printf("%d, ", next);
		i = j;
		j = next;
		next = i + j;
	}

	return (0);
}
