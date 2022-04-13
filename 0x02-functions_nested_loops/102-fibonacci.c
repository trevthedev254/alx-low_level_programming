#include <stdio.h>

/**
 * main - print first fifty fibonnacci numbers
 *
 * Return: Fibonnaci numbers
 */
int main(void)
{
	int i;
	long int next[50];

	next[0] = 1;
	next[1] = 2;
	printf("%ld, %ld, ", next[0], next[1]);

	for (i = 2; i < 50; i++)
	{
		next[i] = next[i - 1] + next[i - 2];
		if (i == 49)
			printf("%ld\n", next[i]);
		else
			printf("%ld, ", next[i]);
	}

	return (0);
}
