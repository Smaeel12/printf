#ifndef MAIN_H
#define MAIN_H

/*****LIBRARIES*****/
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**debugging**/
#include <stdio.h>

/*****STRUCTERES*****/
/**
 * struct s_measure - struct to return index and lenght.
 * @index: index.
 * @lenght: lenght.
 */
typedef struct s_measure
{
	int index;
	int lenght;
} measure;

/**
 * struct s_sp_funcs - struct to call function based on the specifier.
 * @specifier: specifier.
 * @f: pointer to a function.
 */
typedef struct s_sp_funcs
{
	char specifier;

	measure(*f)(va_list arg);
} spfuncs;

/*****PROTOTYPES*****/

/*----PRINTF---*/
int _printf(const char *format, ...);

/*----FUNCS----*/
int _strlen(const char *str);
int _putchar(char c);
int _putstr(char *s);
void _itoa(char *str, int number);
int _pow(int num, int exponent);

/*----PLACEHOLDERS-----*/
measure placeholder(const char *type, va_list args);
measure percent(va_list);
measure character(va_list arg);
measure string(va_list arg);
measure decimal(va_list arg);
measure binary(va_list arg);

#endif
