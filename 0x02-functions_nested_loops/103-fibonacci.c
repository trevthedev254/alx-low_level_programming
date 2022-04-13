#include <stdio.h>

/**
 * main -  sum of even fibonnacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0, j = 1, next = 0, sum;

	next = i + j;
	while (next < 4000000 && (next % 2) == 0)
	{
		i = j;
		j = next;
		next = i + j;
		sum += next;
	}
	printf("%d\n", sum);

	return (0);
}
