#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: A program that prints the lowercase alphabet in reverse,
 * followed by a new line
 *
 * Return: Always 0 (Succcess)
 *
 */
int main(void)
{

	int i;

	for (i = 122; i <= 65; i--)
	{
	putchar(i);
	}

	putchar('\n');

	return (0);

}
