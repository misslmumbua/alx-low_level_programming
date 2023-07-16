#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of int data types = %2d bytes \n", sizeof(short int));
	printf("Size of Long int data types = %2d bytes \n", sizeof(long int));
	printf("Size of float data types = %2d bytes \n", sizeof(float));
	printf("Size of double float data types = %2d bytes \n", sizeof(double));
	printf("Size of long double data types = %2d bytes \n", sizeof(long double));
	printf("Size of char data types = %2d bytes \n", sizeof(char));
	return (0);
}
