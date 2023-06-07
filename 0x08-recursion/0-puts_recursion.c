#include "main.h"

/**
 * _puts_recursion - Print a string
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar("\n"); /* add a new line */
		return;
	}
	_putchar("%c", *s);
	_puts_recursion(s + 1);
}
