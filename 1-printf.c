#include "main.h"
/**
 * _printf - function that produces output based on a format.
 * @format: is a character string. The format string is
 * composed of zero or more directives.
 *
 * Return: the number of characters printed (excluding
 * the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
	int index;
	va_list args;
	int lenght = 0;
	measure rtn;

	if (format == NULL)
		return (-1);

	rtn.lenght = 0;
	rtn.index = 0;
	va_start(args, format);
	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			rtn = placeholder(&format[index], args);
			if (rtn.index == -1)
			{
				return (-1);
			}
			index += rtn.index;
			lenght += rtn.lenght;
		}
		else
		{
			lenght += _putchar(format[index]);
		}
	}
	va_end(args);
	return (lenght);
}
