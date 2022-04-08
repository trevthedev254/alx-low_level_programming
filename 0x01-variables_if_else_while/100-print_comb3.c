#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, a;

	for (i = '0'; i < '9'; i++)
	{
		for (a = i + 1; a <= '9'; a++)
		{
			if (i != a) 
				{
					putchar(i);
					putchar(a);
				
					if (i == '7' && a == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
		}	
	}
	putchar('\n');

	return (0);
}
