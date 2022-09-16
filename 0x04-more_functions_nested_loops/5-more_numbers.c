#include "main.h"

/**
 * more_numbers - prints 10x the nos. 0 to 14
 * followed by a line
 */

void more_numbers(void)
{
int a, b;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 14; b++)
{
if (b >= 10)
_putchar('0' + (b / 10));
_putchar('0' + (b % 10));
}
_putchar('\n');
}
}
