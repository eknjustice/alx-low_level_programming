#include "main.h"

/**
 * _isdigit - checks for digit 0 through 9
 * @c: the char to be checked
 * Return: 1 if c is digit, otherwise 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
