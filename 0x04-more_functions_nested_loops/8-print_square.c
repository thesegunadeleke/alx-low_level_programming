#include "main.h"

/**
 * print_square - prints hashes squares.
 * @n: size of the square.
 * Return: no return.
 */

void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			putchar(35);
		}
		if (i != n - 1)
			putchar('\n');
	}
	putchar('\n');
}
