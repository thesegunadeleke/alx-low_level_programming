#include "main.h"

/**
 * swap_int - function to swap
 * values of 2 integers
 * @a: first value
 * @b: second value
 * Return: success
*/

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
