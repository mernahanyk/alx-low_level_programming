#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - prints from input number to 98
  * @n: int type number.
  * Return: always 0
  */

void print_to_98(int n)
{
	if (n < 98)
	{
		int x = n;

		while (x < 98)
		{
			printf("%d, ", x);
			x++;
		}
	}
	else
	{
		int y = n;

		while (y > 98)
		{
			printf("%d, ", y);
			y--;
		}
	}
	printf("98\n");
}
