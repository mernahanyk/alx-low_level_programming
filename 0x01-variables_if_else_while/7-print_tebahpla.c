#include <stdio.h>
/**
  *main - main code block
  *Description: a program that prints the lowercase alphabet in reverse,
  *followed by a new line.
  *Return: 0 - returns good output
  */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

