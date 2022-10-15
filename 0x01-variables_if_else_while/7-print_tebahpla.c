#include <stdio.h>

/**
 * main - entry point of the programm
 * Return: returns 0 on success
 */

int main(void)
{
	char low_char;

	for (low_char = 'z'; low_char >= 'a'; low_char--)
	{
		putchar(low_char);
	}
	putchar('\n');
	return (0);
}

