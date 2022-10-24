#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: pointer of first input integer
 * @b: pointer of second input integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

