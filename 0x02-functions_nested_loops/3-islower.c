#include "main.h"

/**
 * main - function that check the lowercase charater
 *
 * return: 1 or 0
 */
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
