#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - check last digit
 *
 *declare a number its greater of 5 less that 6 or 0
 *
 *Return: positive or negative or equal
*/
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = (n % 10);
	if (m > 5)
	{printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{printf("Last digit of %d is %d 0 and is 0\n", n, m);
	}
	else if (m < 6)
	{printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
