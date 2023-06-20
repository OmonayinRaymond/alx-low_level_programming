#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Desciption: Aprogram that prints exactly and that piece of art is useful"
 *  - Dora Korpar, 2015-10-19
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	const char A[] = "and that piece of art is useful\" -Dora Korpar, 2015-10-19";

	write(2, A, sizeof(A) - 1);

	return (1);
}
