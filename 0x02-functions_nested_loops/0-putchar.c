#include <unistd.h>
#include "main.h"

/**
 * main - prints putchar followed by a new line
 * Description: program to print a string usint the function _putchar
 * Returns: 0 on success
 */

int main(void)
{
	char word[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
