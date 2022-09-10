#include <stdio.h>

/**
 * main - prints all numbers of base 16
 * Return: Always 0 (Success)
 */

int main(void)
{
int num = '0';
char c = 'a';

while (num <= '9')
{
putchar(num);
num++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');

return (0);
}
