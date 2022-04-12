#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: input
 * Return: 1 if c is an uppercase or lowecase letter else 0
 */
int _isalpha(int c)
{
	char lower, upper;
	int alpha = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
				alpha = 1;
			}
		}
	}
	return (alpha);
}
