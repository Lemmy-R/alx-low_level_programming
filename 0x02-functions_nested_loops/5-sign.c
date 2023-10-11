#include "main.h"
/**
 * main - function that pritnthe sign of a number 
 * return: 1, 0 or -2
 */
int print_sign(int n)
{
	if  (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar ('-');
	return (-1);
	}
	else
	{
		_putchar(0);
	return (0);
	}
}


