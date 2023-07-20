#include "main.h"
/**
 * prints the alphabet in lowercase ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char y;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
