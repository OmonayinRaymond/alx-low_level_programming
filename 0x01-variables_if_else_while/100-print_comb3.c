#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: A program to print all possible different
 * combinations of two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	int count = 0;

	for (i = 0; i <= 9; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
	putchar(i + '0');
	putchar(j + '0');

	count = count + 1;

	if (count <= 44)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');

	return (0);
}
