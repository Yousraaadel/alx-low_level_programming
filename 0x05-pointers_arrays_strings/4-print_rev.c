#include "main.h"
#include <string.h>

int _strlen(char *s);
/**
 * print_rev - A function that prints a string in reverse.
 * @s: any string
 * Return: void
 */
void print_rev(char *s)
{
	int length = _strlen(s);
	int index;

	index = length - 1;
	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}

/**
 * _strlen - A function that returns the length of a string.
 * @s: any string
 * Return: any integer
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
