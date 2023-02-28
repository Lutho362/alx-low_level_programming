#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first parameter to be swapped
 * @b: second parameter to be swapped
 * Return : nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a  = *b;
	*b = c;
}
