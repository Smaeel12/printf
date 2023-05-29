#include "main.h"
/**
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
/**
 * _strlen - function that calculate the lenght of a string.
 * @lenght: the lenght of the string.
 * Return: the lenght.
 */
int _strlen(const char *str)
{
	int lenght;
	for (lenght = 0; str[lenght] != '\0'; lenght++)
		;

	return (lenght);
}
