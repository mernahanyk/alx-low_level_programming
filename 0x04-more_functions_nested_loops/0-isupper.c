#include "main.h"

/**
 * _isupper - checks wether the character is lower or upper case
 *@c : int type character
 * Return: 1 if uppercase and 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
