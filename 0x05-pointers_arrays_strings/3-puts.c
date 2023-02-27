#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string
 * @str: The string to print
 * Return: void
 */
void _puts(char *str)
{
	void _putchar(void);

	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
