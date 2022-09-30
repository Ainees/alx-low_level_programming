#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program@argc: Count arguments@argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *arg[])
{
	printf("%i\n", argc - 1);
	(void)argv;
	return (0);
}
