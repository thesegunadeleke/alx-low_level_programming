#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
