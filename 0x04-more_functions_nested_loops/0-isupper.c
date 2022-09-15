#include "main.h"
/**
 * _isupper - checks if a character is upercase or not
 * @c: character to be tested
 * Return: 1 whether it is, 0 otherwise
 */
int_isupper(int c)
{
	if ((c >= 'A') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}
