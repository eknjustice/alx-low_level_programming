#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 0 Always (on Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
if (argc > 0)

printf("%d\n", argc - 1);

return (0);
}
