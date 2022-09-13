#include "main.h"

/**
 * main - prints _putchar
 * Return: Always 0
 */

int main(void)
{
char name[10] = "_putchar";
int n = 0;
for (n = 0; n < 8; n++)
{
_putchar(name[n]);
}
_putchar('\n');
return (0);
}
