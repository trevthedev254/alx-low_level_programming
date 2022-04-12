#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: input
 * Return: 1 if c is lowercase else 0 if not
 */
int _islower(int c)
{
	char a;
	int lower;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			lower = 1;
		else
			lower = 0;
	}
	return (lower);
}
