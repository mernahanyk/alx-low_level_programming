#include "main.h"

/**
 * _isdigit - checks wether the character is digit
 *@c : int type character
 * Return: 1 if digit and 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
