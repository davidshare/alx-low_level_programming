#include <unistd.h>
#include "main.h"

/**
 * _abs - check the description
 * @n: input number
 * Description: function that returns the absolute value
 * Return: returns the absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}

	return (n * -1);
}
