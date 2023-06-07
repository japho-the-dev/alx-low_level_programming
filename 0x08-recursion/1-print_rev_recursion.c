#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return; /* Base case: end of string */

	_print_rev_recursion(s + 1); /* Recursive call with the next character */
	_putchar(*s); /* Print the current character */
}
