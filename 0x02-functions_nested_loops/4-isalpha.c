#include "main.h"
/**
 * _isalpha - functin to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for the argument of the function
 *
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
