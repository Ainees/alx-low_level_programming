/*this program will assign random numbers to a value*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;
	int F;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	F = n % 10;

	if (F > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, F);
	else if (F == 0)
		printf("%s %d is %d and is 0\n", str, n, F);
	else if (F < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, F);
	return (0);
}
