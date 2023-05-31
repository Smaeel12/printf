#include "main.h"
#include <stdio.h>
/**
 * placeholder - function that handles the placeholders in format string.
 * @type: the type of the argument.
 * @args: the argument.
 *
 * Return: 0 on success, on failed, -1 is returned.
 */
measure placeholder(const char *type, va_list args)
{
	int repeations = 0;
	char space = 0;
	measure tmp;

	tmp.lenght = 0;
	tmp.index = 0;
	while (*type == '%')
	{
		++repeations > 1 ? tmp.index++ : tmp.index;
		type++;
		*type == ' ' ? type++ : type;
		switch (*type)
		{
			case '%':
				tmp.lenght += _putchar('%');
				tmp.index++;
				break;
			case 'c':
				tmp.lenght += _putchar(va_arg(args, int));
				tmp.index++;
				break;
			case 's':
				tmp.lenght += string(va_arg(args, char *));
				tmp.index++;
				break;
			case '\0':
				tmp.lenght = -1;
				tmp.index = -1;
				return (tmp);
			default:
				tmp.lenght += _putchar('%');
				if (space != 0)
					tmp.lenght += _putchar(' ');
				if (*(type + 1) == '\0')
					tmp.index = -1;
				return (tmp);
		}
		type++;
	}
	return (tmp);
}
/**
 * string - function that handle string arguments.
 * @s: The string argument to print.
 * Return: lenght of string on success and -1 on failure
 */
int string(char *s)
{
	if (s == NULL)
	{
		return (_putstr("(null)"));
	}
	return (_putstr(s));
}
