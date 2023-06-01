#include "main.h"
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
	spfuncs sp_arr[] = {{'%', percent}, {'c', character}, {'s', string},
				{'i', decimal}, {'d', decimal}, {'\0', NULL}};
	measure tmp, rtn;
	int status = 0;

	tmp.lenght = 0;
	tmp.index = 0;
	while (*type == '%')
	{
		int i = 0;
		++repeations > 1 ? tmp.index++ : tmp.index;
		type++;
		*type == ' ' ? type++ : type;
		while (sp_arr[i].specifier != '\0')
		{
			if (sp_arr[i].specifier == *type)
			{
				rtn = sp_arr[i].f(args);
				tmp.lenght += rtn.lenght;
				tmp.index += rtn.index;
				status = 1;
				break;
			}
			status = -1;
			i++;
		}
		if (status == -1 && *type == '\0')
		{
			tmp.lenght = -1;
			tmp.index = -1;
			return (tmp);
		}
		if (status == -1 && *type != '\0')
			tmp.lenght += _putchar('%');
		type++;
	}
	return (tmp);
}
