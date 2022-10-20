#include <unistd.h>
#include "main.h"

/**
 * _islower - check the description
 * @c: input character
 * Description: function that checks if a character is lowercase
 * Return: returns 1 if the character is lower case else 0
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
