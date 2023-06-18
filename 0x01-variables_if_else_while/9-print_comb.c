#include <stdio.h>

/**
 * main - Startting point of the program
 *
 * Description: A program that prints all possible
 * combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(' ');
	}

	putchar('\n');
	}

	return (0);

}
