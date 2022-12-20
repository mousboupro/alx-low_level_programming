

#include "main.h"
/**
 * _strlen - function
 * @s: parameter;
 * Return: leng
 */

int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
	len++;
	s++;
}
return (len);
}
