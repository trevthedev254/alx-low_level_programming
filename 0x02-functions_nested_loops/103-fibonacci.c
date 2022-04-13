#include <stdio.h>

/**
 * main -  sum of even fibonnacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	long int next[50], sum = 2;

	next[0] = 1;
	next[1] = 2;

	for (i = 2; i < 50; i++)
	{
		next[i] = next[i - 1] + next[i - 2];
		if ((next[i] % 2) == 0 && next[i] < 4000000)
			sum += next[i];
	}
	printf("%ld\n", sum);

	return (0);
}
