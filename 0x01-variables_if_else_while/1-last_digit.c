#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function is the starting point of program execution.
 * It generates a random number and prints the last digit along with
 * additional information based on the digit's value.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit= n%10;
	
	if(last_digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n",n, last_digit);
	}
	
    	else if(last_digit ==0)
	{
	printf("Last digit of %d is %d and is %d\n",n, last_digit, last_digit);
	}
	else 
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n",n, last_digit);
	}
	
	return (0);
}