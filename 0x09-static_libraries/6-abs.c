# include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @i: integer input
 * Return: Absolute value
 */
int _abs(int i)
{
	int a;

	if (i >= 0)
	{
		a = i;
	}
	else
	{
		a = (i * -1);
	}
	return (a);
}
