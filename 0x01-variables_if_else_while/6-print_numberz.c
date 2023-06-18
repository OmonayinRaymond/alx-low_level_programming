#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: A program that prints first 10 digits
 * starting for 0
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
	}

	putchar('\n');

	return (0);

}
