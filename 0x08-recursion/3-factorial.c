#include "main.h"

/**
 * factorial - calculates the factorial of a given input
 * @n: The number we want its factorial
 * Return: The output factor of the given number
 */

int factorial(int n)
{
	if (n <= 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
