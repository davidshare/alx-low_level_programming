#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - check the description
 * @r: input number
 * Description: function that returns the last digit of a number
 * Return: returns the last digit of a number
 */

int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
