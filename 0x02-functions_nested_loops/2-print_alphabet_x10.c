#include "main.h"

/**
 * print_alphabet_x10 - This function print the10 time the alphabet.
 *
 * Definition: A program prints 10 times the alphabet, in lowercase.
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char p;
	char k;
	for (k = 0; k <= 9; k++)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
	}
}
