#include <stdio.h>

/**
 *main-Entry point
 *Description-putchar prints a character
 *Return: Always 0 (Success)
 */

int main(void)
{
char c;

c = 'a';
while (c <= 'z')
{
putchar(c);
++c;
}
putchar('\n');
return (0);
}
