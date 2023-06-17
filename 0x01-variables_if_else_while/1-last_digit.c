#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main - Prints last digit of a random number 
  *
  * Return: Always (Success)
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
	printf("Last digit of %d is %d and is greater than 5",n, last_digit);
	}
	
    	else if(last_digit ==0)
	{
	printf("Last digit of %d and is %d",n, last_digit);
	}
	else 
	{
	printf("Last digit of %d and is less than 6 and not 0",n);
	}
	
	return (0);
}
