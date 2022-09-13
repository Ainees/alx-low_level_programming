#include <stdio.h>

/**
 * main - print if the number is postive, zero, or negative
 * Description: a program that prints the lowercase alphabet in reverse
 * Return: Always 0 Success
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
