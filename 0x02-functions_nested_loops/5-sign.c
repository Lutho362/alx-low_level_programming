#include "main.h"

/**
 * print_sign - prints the sign of a number whether it is negative or positive
 * @n: is the number tha is gonna be checked
 * Return: return 1 and + or 0 and 0, or -1 and -
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
