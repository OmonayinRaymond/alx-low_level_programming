#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: A program that prints all
 * possible different combinations of three digits.
 *
 *Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i, j, k;

	int count = 0;

	for (i = 0; i <= 9; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
	for (k = j + 1; k <= 9; k++)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(k + '0');

	count = count + 1;

	if (count < 120)
	{
	putchar(',');
	putchar(' ');
	}
	}

	}
	}
	putchar('\n');

	return (0);
}
