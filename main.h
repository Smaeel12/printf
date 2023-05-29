#ifndef MAIN_H
#define MAIN_H

/*****LIBRARIES*****/
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


#include <stdio.h> /**test purpose**/

/*****PROTOTYPES*****/

/*----PRINTF---*/
int _printf(const char *format, ...);

/*----STRING_FUNCS----*/
int _strlen(const char *str);
int _putchar(char c);

/*----PLACEHOLDERS-----*/
int percent(int index);
int placeholder(int index, char type, va_list args);
int character(int index, char c);
int string(int index, char *s);

#endif
