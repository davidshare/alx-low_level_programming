#include <stdio.h>

/**
 * main - check the description
 * Description: print the fibonacci series
 * Return: 0
 */

int main(void)
{
	long int n1 = 1, n2 = 2, n3;
	int i;

	printf("%ld, %ld, ", n1, n2);
	for (i = 2; i < 50; i++)
	{
		n3 = n1 + n2;
		if (i == 49)
			printf("%ld\n", n3);
		else
			printf("%ld, ", n3);
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
