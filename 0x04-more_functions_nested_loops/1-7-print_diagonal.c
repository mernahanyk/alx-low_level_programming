#include "main.h"

/**
  * print_diagonal - function that draws a diagonal line in terminal
  *@n: int type character
  *Return: Always _
  */

void print_diagonal(int n)
{
	int m = 1;
	int k = 0;

	if (n > 0)
	{
		while (m <= n)
		{
			_putchar(92);
			_putchar('\n');
			if (n > 1 && m != n)
			{
				while (k < m)
				{
					_putchar(' ');
					k++;
				}
			}
			k = 0;
			m++;
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
