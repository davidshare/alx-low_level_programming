#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 with a new line 10 times
 * Return: nothing
 */

void more_numbers(void)
{
	int i, j = 0;

	for (; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
