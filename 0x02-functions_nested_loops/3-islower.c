#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checkes for lowercases.
 * @c: any alphabetic character
 * Return: void
 */
int _islower(int c)
{
	int n = c;
	char letter = 'n';

	if (islower(letter))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
