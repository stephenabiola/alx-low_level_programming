#include "main.h"
/**
 * _islower - checks for lower case character
 *
 * Return: 1 or 0
 * @c: parameter to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
