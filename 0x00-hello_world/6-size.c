#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char  data type: %lu byte(s)\n", sizeof(char));
	printf("Size of an int data type: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int data type: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int data type: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float data type: %lu byte(s)\n", sizeof(float));
	return (0);
}
