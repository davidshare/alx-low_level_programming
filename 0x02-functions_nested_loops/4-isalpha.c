#include <unistd.h>
#include "main.h"

/**
 * _isalpha - check the description
 * @c: input character
 * Description: function that checks if input is an alphabet
 * Return: returns 1 if the character is lower case else 0
 */

int _isalpha(int c)
{
	char low_alpha, up_alpha;
	int is_alphabeth = 0;

	for (low_alpha = 'a'; low_alpha <= 'z'; low_alpha++)
	{
		for (up_alpha = 'A'; up_alpha <= 'Z'; up_alpha++)
		{
			if (c == low_alpha || c == up_alpha)
				is_alphabeth = 1;
		}
	}
	return (is_alphabeth);
}
