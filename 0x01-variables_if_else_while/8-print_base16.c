#include <stdio.h>

/**
 * main - Entry pont of program
 *
 * Description: A program to print all the digits of
 *  heaxdecimal is
 *
 *  Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
	if (i < 10)
	{
	putchar(i + '0');
	}
	else
	{
	putchar(i - 10 + 'a');
	}
	}

	putchar('\n');

	return (0);
}
