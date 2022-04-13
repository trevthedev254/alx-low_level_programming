#include <stdio.h>

/**
 * main -  sum of even fibonnacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 1, j = 2, next = 0;

	while (next < 4000000 && (next % 2) == 0)
	{
		i = j;
		j = next;
		next = i + j;
	}
	printf("%d\n", next);

	return (0);
}
