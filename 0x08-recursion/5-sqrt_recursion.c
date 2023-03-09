#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to calculate the natural square root of
 * Return: The natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (1);
	else if (n % 2 != 0 && n % 5 != 0)
		return (-1);
	else
		return (_sqrt(n, 0));
}

/**
 * _sqrt - Calculates natural square root
 * @n: Number to calculate the square root
 * @i: Iterate number
 * Return: The natural square root
 */

int _sqrt(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
