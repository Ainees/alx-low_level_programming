#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
	int f = 0;
	int g_d;
	int p_d;

	while (f <= 99)
	{
		g_d = (f / 10 + '0');
		p_d = (f % 10 + '0');
		if (g_d < p_d)
		{
			putchar(g_d);
			putchar(p_d);

			if (f != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		f++;
	}
putchar('\n');
return (0);
}
