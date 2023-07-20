#include "main.h"
/**
 * isalpha prints a letter, lowercase or uppercase
 * @c - checks if its a letter
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c >= 122))
	{
	return (1);
	}
	return (0);
}
