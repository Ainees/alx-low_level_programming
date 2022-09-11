#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry Point
 * Description: Get a random number and print the number
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
putchar('\n');
return (0);
}
