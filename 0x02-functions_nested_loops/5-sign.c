#include <unistd.h>
#include "main.h"

/**
 * print_sign - check the description
 * @n: input number
 * Description: function that checks if input is an alphabet
 * Return: returns 1 if number is posititive, -1 if negative
 * and 0 if number is 0
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('+');
	return (1);
}
