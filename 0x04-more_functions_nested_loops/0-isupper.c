#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character input
 * Return: 1 if uppercase 0 if lowecase
 */

int _isupper(int c)
{
	int upper;
	int alpha;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (upper == c)
		{
			alpha = 1;
			_putchar(upper + '0');
			_putchar(':');
			_putchar(' ');
			_putchar(alpha + '0');
		}
		else
		{
			alpha = 0;
			_putchar(upper + '0');
			_putchar(':');
			_putchar(' ');
			_putchar(alpha + '0');
		}
	}

	return (alpha);
}
