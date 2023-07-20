#include "main.h"

/**
 * print_square - check for a digit
 * @n: number of _ to be printed
 * Return: void
 */

void print_square(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		while (i < n)
		{
			while (j < n)
			{
				_putchar(35);
				j++;
			}
			_putchar('\n');
			i++;
			j = 0;
		}
	}
	else
	{
		_putchar('\n');
	}
}
