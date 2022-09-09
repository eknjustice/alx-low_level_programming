#include <stdio.h>

/**
 * main - prints string in the printf function
 *
 * Description: using the main function
 * this program prints sizes of data types
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int x;
	float f;

	printf("size of a char: %zu byte(s)\n", sizeof(c));
	printf("size of an int: %zu byte(s)\n", sizeof(i));
	printf("size of a long int: %zu byte(s)\n", sizeof(l));
	printf("size of a long long int: %zu byte(s)\n", sizeof(x));
	printf("size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
