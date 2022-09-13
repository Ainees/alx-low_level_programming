#include <stdio.h>

/**
 * main - program that prints all possible different combinations of 3 digits.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int f_s;
	int m_s;
	int l_s;

	while (i <= 999)
	{
		f_s = (i / 100 + '0');
		m_s = (i / 10 % 10 + '0');
		l_s = (i % 10 + '0');

		if ((f_s < m_s) && (m_s < l_s))
		{
			putchar(f_s);
			putchar(m_s);
			putchar(l_s);

			if (i != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
putchar('\n');
return (0)
}
