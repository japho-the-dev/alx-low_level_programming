#include "main.h"

/**
 * main - print_alphabet - print all alphabet in lowercase
 *
 * Return:
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
