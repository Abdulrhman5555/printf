#include "main.h"

/**
 * printc - print char.
 * @var: the specifid char.
 * Return: 1.
 */

int printc(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}