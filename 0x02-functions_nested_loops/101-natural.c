#include <stdio.h>

/**
 * main - sum of natural numbers dividible by 3 or 5
 *
 * Return: Always 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
