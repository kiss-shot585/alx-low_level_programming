#include "main.h"
/**
 * islower - checks for lower case character
 *
 * Return: 1 if lower case, 0 if upper case
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
