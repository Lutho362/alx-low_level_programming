#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The pointer to convert
 * Return: A integer
 */

int _atoi(char *s)
{
	int num = 1;
	unsigned int ans = 0;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		{
			num *= -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		ans = ans * 10 + (*s - '0');
		s++;
	}
	return (num * ans);
}
