#include "main.h"

/**
 * print_rev - prints a string in reverse followed by new line
 * @s: String to be printed in reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	for (a -= 1; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
