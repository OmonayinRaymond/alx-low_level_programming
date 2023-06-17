#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - Prints the value of number, whether possitive, zero or negative
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
	printf("%d is positive",n);
	}
	if (n==0)
        {
        printf("%d is zero",n);
        }
	else
        {
        printf("%d is negaitive",n);
        }
	return (0);
}
