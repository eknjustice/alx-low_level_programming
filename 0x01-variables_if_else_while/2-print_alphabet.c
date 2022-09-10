#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main()
{
char alpha;
alpha = "a";
while (alpha <= "z")
{
putchar(alpha);
alpha++;
}
putchar("\n");

return (0);
}
