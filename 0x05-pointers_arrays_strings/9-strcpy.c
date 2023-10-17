#include "main.h"

/**
 * _strcpy - coppies src and terminates bufffer pointed to by dest
 * @dest: This is destiny
 * @src: This is the copy
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
