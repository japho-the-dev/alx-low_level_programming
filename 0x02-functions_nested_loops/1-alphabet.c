#include "main.h"

/**
 * main - main function - print_alphabet - print all alphabet in lowercase
 *
 * Return: Always return 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
