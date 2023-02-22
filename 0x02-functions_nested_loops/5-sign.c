#include "main.h"

/**
 * print_sign - prints the sign of a number whether it is negative or positive
 * @n: is the number tha is gonna be checked
 * Return: return 1 and + if the number is positive, 0 and 0 if its 0, otherwyze -1 and - if it is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
