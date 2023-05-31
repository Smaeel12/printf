#ifndef MAIN_H
#define MAIN_H

/*****LIBRARIES*****/
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/*****STRUCTERES*****/
typedef struct s_measure
{
	int index;
	int lenght;
} measure;
/*****PROTOTYPES*****/

/*----PRINTF---*/
int _printf(const char *format, ...);

/*----STRING_FUNCS----*/
int _strlen(const char *str);
int _putchar(char c);
int _putstr(char *s);

/*----PLACEHOLDERS-----*/
measure placeholder(const char *type, va_list args);
int string(char *s);

#endif
