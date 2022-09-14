#include "main.h"
/**
 * print_alphabet - function that prints the alphabet in lowercase.
 * Definition: A program that print alphabet.
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
