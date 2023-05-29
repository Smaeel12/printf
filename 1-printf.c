#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format is a character string. The format string is composed of zero or more directives.
 * Return: the number of characters printed (excluding the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
	int index;
	va_list args;
	va_start(args, format);

	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '%')
			{
				_putchar('%');
				index++;
			}
			else
			{
				placeholder(format[index], args);
				if (index == -1)
					return (-1);
				index++; 
			}
		}
		_putchar(format[index]);
	}
}
