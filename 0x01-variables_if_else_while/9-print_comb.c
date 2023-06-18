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

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	if (i < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n');

	return (0);

}
