#include "main.h"
int placeholder(int index, char type, va_list args)
{
	char c;
	char *s;
	switch (type)
	{
		case 'c':
			c = va_arg(args, int);
			return(character(index,c));
		case 's':
			s = va_arg(args, char *);
			return(string(index, s));
		default:
			return (-1);
	}
}
int percent(int index)
{
	write(STDOUT_FILENO, "%", 1);
	return (index + 1);
}
int character(int index, char c)
{
	write(STDOUT_FILENO, &c, 1);
	return (index + 1);
}
int string(int index, char *s)
{
	write(STDOUT_FILENO, s, _strlen(s));
	return (index + _strlen(s));
}
