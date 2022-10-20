#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints all lower alphabet characters using _putchar
 * 10 times
 * Description: function to print all lower alphabet characters using _putchar
 * 10 times
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
