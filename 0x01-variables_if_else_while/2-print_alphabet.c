#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while ((letter >= 'a') && (letter <= 'z'))
	{
		putchar(letter);
		letter++;
	}
	putchar("\n");

	return (0);
}
