#include "main.h"

/**
 * _strlen - Entry point
 * Description: a function that returns the length of a string
 * @s: Intefer
 * Return: int
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
