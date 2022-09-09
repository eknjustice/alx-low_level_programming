#include <stdio.h>

/*
 * main - prints string in the printf function
 *
 * Description: using the main function
 * this program prints size "Programming is like building a multilingual puzzle
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int x;
	float f;

	printf("size of a char: %d byte(s)\n", sizeof(c));
	printf("size of an int: %d byte(s)\n", sizeof(i));
	printf("size of a long int: %d byte(s)\n", sizeof(l));
	printf("size of a long long int: %d byte(s)\n", sizeof(x));
	printf("size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
