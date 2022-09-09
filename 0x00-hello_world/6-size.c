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

	printf("size of a char: %c bytes\n", sizeof(c));
	printf("size of an int: %d bytes\n", sizeof(i));
	printf("size of a long int: %li bytes\n", sizeof(l));
	printf("size of a long long int: %lli bytes\n", sizeof(x));
	printf("size of a float: %f bytes\n", sizeof(f));
	return (0);
}
