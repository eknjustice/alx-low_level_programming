#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 * each time in new line
 */

void print_alphabet_x10(void)
{
int n = '0';
char letter = 'a';
while (n <= '9')
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
n++;
}
}
