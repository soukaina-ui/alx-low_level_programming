#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long j = 0, k = 1, s;

	for (i = 0; i < 50; i++)
	{
		s = j + k;
		printf("%lu", s);

		j = k;
		k = s;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
