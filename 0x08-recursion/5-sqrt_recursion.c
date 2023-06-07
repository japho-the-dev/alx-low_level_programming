#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n) {
    if (n < 0) {
        return -1;  /* Negative numbers do not have a natural square root */
    }
    if (n == 0 || n == 1) {
        return n;  /* Base case: square root of 0 or 1 is the number itself */
    }
    return _sqrt_recursive_helper(n, 1, n);
}

/**
 * sqrt_recursive_helper - helper function to solve _sqrt_recursion
 * @sq: number to determine if square root
 * @n:  int number
 * Return: square root if natural square root, or -1 if none found
 */

int sqrt_recursive_helper(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrt_recursive_helper(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
