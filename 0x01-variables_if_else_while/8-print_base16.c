#include <stdio.h>

/**
 * main - entry point of the programm
 * Return: returns 0 on success
 */

int main(void)
{
	int n = 48;
	char ch = 'a';

	while (n < 58)
	{
		putchar(n);
		n++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}

