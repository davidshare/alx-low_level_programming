#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;
	int counter = 0;

	while (*src)
	{
		*dest++ = *src++;
		counter++;
	}
	tmp[counter] = '\0';
	return (tmp);
}

