#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
* struct Formatter -  structure for symbol and handler
*
* @symbol: specifier
* @handler: matching function
*/

struct Formatter
{
	char *symbol;
	int (*handler)(va_list);
};

typedef struct Formatter F_Handler;

int _printf(const char *format, ...);
int analyzer(const char *format, F_Handler funcs_list[], va_list args_list);


int _output_char(char c);


int p_char(va_list list);
int p_string(va_list list);
int p_percent(__attribute__((unused)) va_list list);
int p_integer(va_list args);
int p_uns_num(unsigned int n);

#endif
