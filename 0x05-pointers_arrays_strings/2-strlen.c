#include "main.h"

/**
 * int _strlen - function that returns the lengnth of a string
 * @str: string to print
 */
int _strlen(char *s)
{
int string_length = 0;
	while (s[string_length])
		string_length++;
	return (string_length);
}
