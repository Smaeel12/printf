#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
/**
 * _putstr - writes the string s to stdout
 * @s: The string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putstr(char *s)
{
	write(STDOUT_FILENO, s, _strlen(s));
	return (_strlen(s));
}
/**
 * _strlen - function that calculate the lenght of a string.
 * @str: the string.
 * Return: return the lenght of string.
 */
int _strlen(const char *str)
{
	int lenght;

	for (lenght = 0; str[lenght] != '\0'; lenght++)
		;

	return (lenght);
}
