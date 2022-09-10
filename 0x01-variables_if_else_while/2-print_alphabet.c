/* This program prints the alphabet in lowercase, followed by a new line*/
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase with a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'a' ; l <= 'z'; l++)
{
		putchar(l);
}
putchar("\n");

return (0);
}
