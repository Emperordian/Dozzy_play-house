#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the
 * size of types char, int and float
 *
 * Return: always 0
 */
int main(void)
{
	int b;

	printf("size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("size of type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("size of type of my variable b on my computer: %lu bytes\n", sizeof(b));
	return (0);
}
