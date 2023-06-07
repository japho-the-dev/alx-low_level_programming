#include "main.h"

/**
 * _strlen_recursion - return length of a string parsed
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int count;
/* Base case: when the string is empty or the null character is encountered */
	if (*s == '\0')
		return (0);
/* Recursive case: increment the length by 1 and move to the next character */
	count = 1 +  _strlen_recursion(s + 1);

	return (count);
}
