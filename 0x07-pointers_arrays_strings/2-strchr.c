#include "main.h"

/**
 * *_strchr - locates a character in a string
 *@s: char type pointer
 *@c: char type character
 *Return: always pointer to character or Null if character not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}

