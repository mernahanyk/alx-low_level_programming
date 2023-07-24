#include "main.h"

/**
  * swap_int - swaps values of 2 integers.
  * @a: int type character
  * @b: int type character
  *Return: Always 0.
  */

void swap_int(int *a, int *b)
{
	int n = *a;
	int m = *b;

	*a = m;
	*b = n;
}
