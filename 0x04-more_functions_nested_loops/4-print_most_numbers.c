#include "main.h"
/**
 * print_most_numbers - Entry point
 * Description - a function that prints the numbers, from 0 to 9
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
0 comments on commit 4bfe0e2
