#include "main.h"

/**
  * print_line - function that draws a straight line in terminal
  *@n: int type character
  *Return: Always _
  */

void print_line(int n)
{
	int m = 0;

	if (n > 0)
	{
		while (m < n)
		{
			_putchar(95);
			m++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
