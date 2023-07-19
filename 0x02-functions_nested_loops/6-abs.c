#include "main.h"

/**
  * _abs - computes absolute value
  * @n: int type that can be positive or negative
  *Return: always 0.
  */

int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}

	return (0);
}
