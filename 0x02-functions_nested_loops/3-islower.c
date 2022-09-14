#include "main.h"

/**
 * _islower - This function to check for lowercase character
 * @c:  is the int that will use for the argument of the function.
 * Definition: a function that checks for lowercase character.
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
