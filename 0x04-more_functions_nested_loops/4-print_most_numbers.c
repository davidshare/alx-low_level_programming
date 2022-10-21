#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 apart from 2 and 4
 * Return: nothing
 */

void print_most_numbers(void)
{
	int num = '0';

	while (num <= '9')
	{
		if (num == '2' || num == '4')
		{
			num++;
			continue;
		}
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
