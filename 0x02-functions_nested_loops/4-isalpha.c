#include "main.h"
/**
 * _salpha – function to check if c is a letter, lowercase or uppercase
 * 
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
