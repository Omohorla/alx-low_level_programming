#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print a random number decides whether it is positive,negative,orzero.
 *
 * Return: always 0.
 */
int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);

}
