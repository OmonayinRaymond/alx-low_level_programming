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
	const char Arr[] = "and that piece of art is useful\" - Dora Korpar, \
				2015-10-19\n";

	write(2, Arr, sizeof(Arr) - 1);

	return (1);
}
