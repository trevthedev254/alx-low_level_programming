#include <main.h>

/**
 * main - print first fifty fibonnacci numbers
 *
 * Return: Fibonnaci numbers
 */
int main(void)
{
	int i;
	long int next[98];

	next[0] = 1;
	next[1] = 2;
	_putchar(next[0] + '0');
	_putchar(next[1] + '0');

	for (i = 2; i < 98; i++)
	{
		next[i] = next[i - 1] + next[i - 2];
		if (i == 97)
			_putchar(next[i] + '0');
		else
			_putchar(next[i] + '0');
	}

	return (0);
}
