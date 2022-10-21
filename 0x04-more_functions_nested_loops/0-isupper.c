#include "main.h"

/**
 * _isupper - A function to check for uppercase characters
 * @c: The input character
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	char upper = 'A';

	while (upper <= 'Z')
	{
		if (upper == c)
			return (1);
		upper++;
	}

	return (0);
}
