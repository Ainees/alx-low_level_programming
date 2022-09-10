#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase with a newline
 * Return: Always 0 (Success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char l;

	for (l = 'a' ; l <= 'z'; l++)
{
		putchar(l);
}
putchar('\n');
return (0);
}
