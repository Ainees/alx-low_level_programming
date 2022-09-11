#include <stdio.h>
#include <ctype.h>
/**
 * main - starting point
 *
 * Desrciption: prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always (0) Success
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
{
		putchar(x);
}
for (x = 'A' ; x <= 'Z' ; x++)
{
	putchar(x);
}
putchar('\n');
return (0);
}
