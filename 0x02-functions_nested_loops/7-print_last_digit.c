#include "main.h"
/**
 * print_last_digit
 * @i:function parameter
 * Return: k
 */
int print_last_digit(int)
{
	int k;
	k = i % 10;
	if (i < 0)
		k = -k;
	-putchar(k + '0');
	return (k);

}
