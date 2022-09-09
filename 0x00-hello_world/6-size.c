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

	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(l));
	printf("size of a long long int: %ld byte(s)\n", sizeof(x));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
