# include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: integer input
 * Return: 1 print + if > 0, else if 0 print 0, else -1  print - < 0
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		i = -1;
		_putchar('-');
	}

	return (i);
}
