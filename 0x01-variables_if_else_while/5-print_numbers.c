#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	while (a < 10)
	{
		putchar((a % 10) + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
