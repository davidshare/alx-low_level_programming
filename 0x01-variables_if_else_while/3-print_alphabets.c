#include <stdio.h>

/**
 * main - entry poing of program
 * Return: returns 0 on success
 */

int main(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
		putchar(character);
	for (character = 'A'; character <= 'Z'; character++)
		putchar(character);
	putchar('\n');
	return (0);
}

