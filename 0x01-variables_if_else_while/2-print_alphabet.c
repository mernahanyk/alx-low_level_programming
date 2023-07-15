#include <stdio.h>

/**
 * main - main block
 * Description: Use `putchar` to print lowercase alphabetand then a new line.
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

