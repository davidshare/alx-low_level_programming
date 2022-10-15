#include <stdio.h>

/**
 * main - entry point of the programm
 * Return: returns 0 on success
 */

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');
	return (0);
}

