#include "main.h"

/*
 * _strlen- function that returns length of a string
 * @s: The string that we want to return its length
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
