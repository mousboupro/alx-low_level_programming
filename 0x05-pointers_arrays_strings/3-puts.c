


#include "main.h"
/**
 * _puts - function
 * @str: parameter;
 * Return: leng
 */


void _puts(char *str)
{
while (*str != '\0')
{
	_putchar(*str);
	str++;
}
_putchar('\n');
}
