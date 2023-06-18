#include <stdio.h>

/**
 *main - Entry point of the program
 *
 *Description: A program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i;

	for (i = 97; i <= 122; i++)
	{
	putchar(i);
	}

	putchar('\n');

	return (0);
}
