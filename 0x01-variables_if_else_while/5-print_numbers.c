#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while ((n >= 0) && (n <= 9))
	{
		printf("%d", n);
	}
	printf("\n");

	return (0);
}
