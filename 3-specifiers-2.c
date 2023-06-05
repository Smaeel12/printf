#include "main.h"

/**
 * percent - print percent.
 * @arg: argument list (NOT USED)
 * Return: variable type measure
 */
measure uniint(va_list arg)
{
	measure rtn;
	unsigned int d = va_arg(arg, int);
	char s[12];

	_itoa(s, d);
	rtn.lenght = _putstr(s);
	rtn.index = 1;
	return (rtn);
}

/**
 * binary - function that handle converting
 * the unsigned int arguments to binary.
 * @arg: The decimal argument to print.
 * Return: variable type measure
 */
measure unioctal(va_list arg)
{
	measure rtn;
	unsigned int d = va_arg(arg, int);
	unsigned int i;
	int exponent = 11;
	char *octal, *s;

	if (d == 0)
	{
		rtn.lenght = _putchar('0');
		rtn.index = 1;
		return (rtn);
	}
	octal = malloc(exponent + 1);
	if (octal == NULL)
	{
		exit(1);
	}
	while ((d / _pow(8, exponent)) == 0 && exponent != 0)
	{
		octal[11 - exponent] = '\0';
		exponent--;
	}
	for (; exponent > 0; exponent--)
	{
		i = d / _pow(8, exponent);
		octal[11 - exponent] = i + '0';
		d %= _pow(8, exponent);
	}
	octal[11] = '\0';
	s = octal;
	while (*s == '\0')
		s++;
	rtn.lenght = _putstr(s);
	rtn.index = 1;
	if (octal != NULL)
	{
		free(octal);
	}
	return (rtn);
}

measure unihex(va_list arg)
{
	measure rtn;
	unsigned int d = va_arg(arg, int);
	unsigned int i;
	int exponent = 8;
	char *hex, *s;

	if (d == 0)
	{
		rtn.lenght = _putchar('0');
		rtn.index = 1;
		return (rtn);
	}
	hex = malloc(exponent + 1);
	if (hex == NULL)
		exit(1);
	while ((d / _pow(16, exponent)) == 0 && exponent != 0)
	{
		hex[8 - exponent] = '\0';
		exponent--;
	}
	for (; exponent > 0; exponent--)
	{
		i = d / _pow(16, exponent);
		if (i > 9)
			hex[8 - exponent] = 97 + i - 10;
		else
			hex[8 - exponent] = i + '0';
		d %= _pow(16, exponent);
	}
	hex[8] = '\0';
	s = hex;
	while (*s == '\0')
		s++;
	rtn.lenght = _putstr(s);
	rtn.index = 1;
	if (hex != NULL)
		free(hex);
	return (rtn);
}

measure uniHEX(va_list arg)
{
	measure rtn;
	unsigned int d = va_arg(arg, int);
	unsigned int i;
	int exponent = 8;
	char *hex, *s;

	if (d == 0)
	{
		rtn.lenght = _putchar('0');
		rtn.index = 1;
		return (rtn);
	}
	hex = malloc(exponent + 1);
	if (hex == NULL)
		exit(1);
	while ((d / _pow(16, exponent)) == 0 && exponent != 0)
	{
		hex[8 - exponent] = '\0';
		exponent--;
	}
	for (; exponent > 0; exponent--)
	{
		i = d / _pow(16, exponent);
		if (i > 9)
			hex[8 - exponent] = 65 + i - 10;
		else
			hex[8 - exponent] = i + '0';
		d %= _pow(16, exponent);
	}
	hex[8] = '\0';
	s = hex;
	while (*s == '\0')
		s++;
	rtn.lenght = _putstr(s);
	rtn.index = 1;
	if (hex != NULL)
		free(hex);
	return (rtn);
}
