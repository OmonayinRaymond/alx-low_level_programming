#include <stdio.h>

/**
 *main - Entry point of the programd
 *
 * Description: A program that prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i, j, k, l;

	int count = 0;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	for (k = 0; k <= 9; k++)
	{
	for (l = k + 1; l <= 9; l++)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(' ');
	putchar(k + '0');
	putchar(l + '0');
	count = count + 1;

	if (count < 4500)
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
