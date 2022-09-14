#include "main.h"

/**
 * main: Starting point
 * Definition: A program thatprint_alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
