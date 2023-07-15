#include <stdio.h>

/**
  *main - main code block
  *a program that prints alhpabet letters except q and e, then followed
  *by a new line.
  *Return: 0
  */
int main(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		if (s != 'q' && s != 'e')
		{
			putchar(s);
		}
		s++;
	}
	putchar('\n');
	return (0);
}
