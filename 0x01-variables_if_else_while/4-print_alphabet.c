#include <stdio.h>
/*
 * main-Entry point
 * Return: always 0 (success)
 */

int main(void)
{
char alpha = 'a';

while (alpha <= 'z') 
{
putchar(alpha);
alpha++;
if (alpha == 'e' and alpha == 'q')
{
continue;
}
}
putchar('\n')
return (0);
}
