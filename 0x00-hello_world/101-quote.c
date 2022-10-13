#include <unistd.h>

/**
 * main - prints a string using the write function
 * Return: 0 on success and non-zero number on failure
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

