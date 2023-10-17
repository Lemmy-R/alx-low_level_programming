#include "main.h"

/**
 * swap_int - takes in two variable integers and swaps them
 * @a - integer to swap
 * @b - integer to swap
 * return: Always 0
 */
void swap_int(int *a, int *b)
{
	int m;

	m  = *b;
	*b = *a;
	*a = m;
}
