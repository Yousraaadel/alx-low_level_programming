#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: an integer
 * @argv: an array that holds all arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	*argv = *argv;

	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
