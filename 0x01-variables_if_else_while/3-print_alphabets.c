#include <stdio.h>

/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */

int main(void)
{
	char s = 'a';
	char c = 'A';

	while (s <= 'z')
	{
		putchar(s);
		s++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

