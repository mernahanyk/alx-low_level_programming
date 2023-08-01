#include "main.h"

/**
  * *_strpbrk - searches a string for any of a set of bytes
  *@s: char type string
  *@accept: char type string
  *Return: pointer to bytes in s or NULL if no such bytes is found
  */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}
	return ('\0');
}
