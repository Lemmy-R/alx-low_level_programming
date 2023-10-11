#include "main.h"

/**
 * main - function to print alphabet in lowercase
 * return: 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
