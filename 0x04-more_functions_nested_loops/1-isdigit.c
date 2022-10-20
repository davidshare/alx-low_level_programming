#include "main.h"

/**
 * _isdigit - A function to check if an input is a number
 * @c: The input character
 * Return: 1 if c is a number and 0 otherwise
 */

int _isdigit(int c)
{
	char num = '0';

	while (num <= '9')
	{
		if (num == c)
			return (1);
	}

	return (0);
}
