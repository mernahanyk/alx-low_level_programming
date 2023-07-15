#include <stdio.h>
/**
 *main - main code block
 *Description: a program that prints all possible combinations of
 *single-digit numbers, each followed by a comma then space.
 *Return: 0 - returns good value
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
