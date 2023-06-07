#include "main.h"

/**
 * factorial - return factorial of a given number.
 * @n: int type number
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* Error: Invalid input */
	}
	else if (n < 2)
	{
		return (1); /* Base case: factorial of 0 is 1 */
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
