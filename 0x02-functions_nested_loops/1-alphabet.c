#include "main.h"

/**
 * main - entry point (print_alphabet)
 * Description: A c program that print all alphabet in lowercase
 *
 * Return: Always return 0 (Success)
 */
void print_alphabet(void)/*print all alphabet in lowercase*/
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
