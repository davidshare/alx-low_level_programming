#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - prints all lower alphabet characters using _putchar
 * Description: function to print all lower alphabet characters using _putchar
 * Returns: Nothing
 */

void print_alphabet(void)
{
	char low_alpha = 'a';

	while (low_alpha <= 'z')
	{
		_putchar(low_alpha);
		low_alpha++;
	}
	_putchar('\n');

}
