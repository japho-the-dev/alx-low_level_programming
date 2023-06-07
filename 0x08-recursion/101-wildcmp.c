#include "main.h"

/**
 * wildcmp - compares two strings.
 * @s1: string 1.
 * @s2: string 2. It can contains a * as a special character
 * Return: 1 if are identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	/* Base case: both strings are empty */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

    /* If the current characters match or the second string contains '*' */
	if (*s1 == *s2)
	{
		/* Recursively check the remaining characters */
		return (wildcmp(s1 + 1, s2 + 1));
	}
	/**
	 * If the second string contains '*',
	 * try skipping a character in the first string
	 */
	if (*s2 == '*')
	{
		/* Recursively check if the remaining characters match */
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	/**
	 * The characters don't match and the second string doesn't contain '*',
	 * so they are not identical
	 */
	return (0);
}

