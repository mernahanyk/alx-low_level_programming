#include "main.h"

/**
  * _isalpha - checks for alphabet characters.
  * @c: char type letter.
  * Return: 1 if c is alpha, 0 otherwise.
  */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
