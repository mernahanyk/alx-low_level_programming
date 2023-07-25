#include "main.h"

/**
  * _puts - prints a string followed by a new line.
  *@str: type char character
  *Return: always 0
  */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
