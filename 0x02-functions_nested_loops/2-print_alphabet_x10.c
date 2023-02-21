#include "main.h"

/**
 * main - print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by a new line
 * Return: always void (Success)
 */
/**
 * Print_alphabet_x10 - main function that print_alphabet 10 times
 * Character - @arg1 : Accept character data types
 * int - @arg2: accepts integers (10 timws)
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
				ch++;
		}
		_putchar('\n');
		i++;
	}
}
