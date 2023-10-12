#include "main.h"
#include <stdio.h>

/**
 * main - function that checks uppercase charater
 * return 1 if c is uppercase
 * return 0 otherwise
 */

int _isupper(int c)
{
	if  (c >= 64 && c <= 90)
	{
		return (1);
	}
		return (0);

}

