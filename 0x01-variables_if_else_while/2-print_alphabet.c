#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
main(void)
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
