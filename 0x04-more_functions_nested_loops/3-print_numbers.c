#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: Void
 */

void print_numbers(void)
{
	char c;
	void _putchar();

	for (c = '0'; c <= '9'; c++)
	{
		_putchar((c) + "\n");
	}
}
