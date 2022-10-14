#include <stdio.h>

/**
 * main - entry poing of program
 * Return: returns 0 on success
 */

int main(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
		if (character != 'e' && character != 'q')
		{
			putchar(character);
		}
	putchar('\n');
	return (0);
}

