#include "main.h"

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
/**
 * _itoa - function that converts an int to a string pointed to by str.
 * @str: The converted value.
 * @number: the number to convert.
 */
void _itoa(char *str, long int number)
{
	int i = 0, j = 0;
	char tmp;
	unsigned int num;

	if (number == 0)
	{
		str[i] = '0';
		i++;
	}
	if (number < 0)
	{
		str[i] = '-';
		num = number * -1;
		i++, j++;
	}
	else
	{
		num = number;
	}

	for (; num != 0; i++)
	{
		str[i] = '0' + (num % 10);
		num /= 10;
	}
	str[i] = '\0';
	i--;
	for (; j < i; i--, j++)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
	}
}
/**
 * _pow - function that calculate the power of a number
 * @num: The number value.
 * @exponent: the power.
 * Return: the power of the number
 */
int _pow(int num, int exponent)
{
	int p = 1;
	int i;

	for (i = 1; i < exponent; i++)
	{
		p *= num;
	}
	return (p);
}
