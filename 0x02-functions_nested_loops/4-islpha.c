#include "main.h"
/**
 * isalpha checks for alphabetic character
 * @c prints a letter, lowercase or uppercase
 * Return: 1
 */
int _isalpha(int c)
{
	if (c <= 65 && c <= 90) || (c >= 97 && c >= 122)
	{
	return (1);
	}
	return (0);
}
