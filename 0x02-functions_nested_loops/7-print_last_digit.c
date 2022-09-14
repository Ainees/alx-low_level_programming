#include "main.h"
#include <stdio.h>
/**
 * _abs - a function that prints the last digit of a number.
 * Definition: This program will prints the last digit of a number.
 * @n: The number at present
 * Return: 0
 */
int print_last_digit(int n)

{
	int last_digit = n % 10;
	
	if (last_digit < 0)
	{
		last_digit *= -1;
	}
_putchar(last_digit + '0');
return (last_digit);
}
