#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x : value 1
 * @y: value of the power
 * Return: x to power of y
 */

int _pow_recursion(int x, int y)
{
	/* Base case: y equals 0, return 1 */
	if (y == 0)
	{
		return 1;
	}
	/* If y is negative, return -1 */
	if (y < 0)
	{
		return -1;
	}
	/* Recursive case: multiply x with x raised to y - 1 */
	return x * _pow_recursion(x, y - 1);
}
