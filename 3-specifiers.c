#include "main.h"
/**
 * percent - print percent.
 * @arg: argument list (NOT USED)
 * Return: variable type measure
 */
measure percent(va_list arg)
{
	measure rtn;

	(void)arg;
	rtn.lenght = _putchar('%');
	rtn.index = 1;
	return (rtn);
}

/**
 * charcter - print percent.
 * @arg: argument list (NOT USED)
 * Return: variable type measure
 */
measure character(va_list arg)
{
	measure rtn;

	rtn.lenght = _putchar(va_arg(arg, int));
	rtn.index = 1;
	return (rtn);
}

/**
 * string - function that handle string arguments.
 * @arg: The string argument to print.
 * Return: lenght of string on success and -1 on failure
 */
measure string(va_list arg)
{
	measure rtn;
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	rtn.lenght = _putstr(s);
	rtn.index = 1;
	return (rtn);
}

/**
 * decimal - function that handle decimal arguments.
 * @arg: The decimal argument to print.
 * Return: variable type measure
 */
measure decimal(va_list arg)
{
	measure rtn;
	int d = va_arg(arg, int);
	char s[20];

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
measure binary(va_list arg)
{
	measure rtn;
	int d = va_arg(arg, int);
	int i, exponent = 32;
	char *binary, *s;

	if (d == 0)
	{
		rtn.lenght =  _putchar('0');
		rtn.index = 1;
		return (rtn);
	}
	binary = malloc(exponent + 1);
	while ((d / _pow(2, exponent)) == 0 && exponent != 0)
	{
		if (d < 0)
			binary[32 - exponent] = '1';
		else
			binary[32 - exponent] = '\0';
		exponent--;
	}
	for (; exponent > 0; exponent--)
	{
		i = d / _pow(2, exponent);
		if (i != 0)
			binary[32 - exponent] = '1';
		else
			binary[32 - exponent] = '0';
		d %= _pow(2, exponent);
	}
	binary[32] = '\0';
	s = binary;
	while (*s == '\0')
		s++;
	rtn.lenght = _putstr(s);
	rtn.index = 1;
	free(binary);
	return (rtn);
}
