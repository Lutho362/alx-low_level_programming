#include "main.h"

/**
 * _isuper - check if a letter is uppercase
 * @x: The letter to be checked
 * Return: 1 for upper letter or 0 for any other
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
