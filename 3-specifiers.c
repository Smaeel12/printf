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
	char s[10];

	_itoa(s, d);
	rtn.lenght = _putstr(s);
	rtn.index = 1;
	return (rtn);
}
