#include <stdio.h>

/**
 * main - prints all two digit combinations
 * Return: Always 0 (Success)
 */

int main(void)
{
int ones = '0';
int tens = '0';
int tens2 = '0';
int ones2 = '0';

for (tens = '0'; tens <= '9'; tens++)
{
for (ones = '0'; ones <= '9'; ones++)
{
for (tens2 = '0'; tens2 <= '9'; tens2++)
{
for (ones2 = '0'; ones2 <= '9'; ones2++)
{
if (!(((ones == 0) && (ones2 == 0)) || ((ones < ones2) && (tens <= tens2))))
{
putchar(tens);
putchar(ones);
putchar(' ');
putchar(tens2);
putchar(ones2);
if (!(ones == '8' && tens == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
