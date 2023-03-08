#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Prints a string
 * @s: String to be printed
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
