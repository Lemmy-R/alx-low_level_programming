#include "main.h"

/**
 * main - function that checks alphabetic character
 *return: 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

