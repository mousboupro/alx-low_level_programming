



#include "main.h"
/**
 * print_rev - function
 * @s: parameter;
 * Return: leng
 */

void print_rev(char *s)
{
int len = _strlen(s);
while (len--) {
	_putchar(s[len]);
}
_putchar('\n');
}
