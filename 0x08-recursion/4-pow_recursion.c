#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y
 * @x: Base variable
 * @y: Raised variable
 * Return: integer value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
