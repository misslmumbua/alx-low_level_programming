#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a = 0;

	while (a < 16)
	{
		putchar((a % 16) + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
