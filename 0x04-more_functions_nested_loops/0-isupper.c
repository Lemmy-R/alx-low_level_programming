#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for lowercase character
 * @c:the character to be checked
 * Return: 1 for digit character or 0 for anything else
 */

int _isupper(int c)

{
if (c >= 64 && c <= 90)
{
return (1);
}
return (0);
}
