#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

struct Formatter
{
    char *symbol;
    int (*handler)(va_list);
};

typedef struct Formatter F_Handler;

int _printf(const char *format, ...);
int analyzer(const char *format, F_Handler funcs_list[], va_list args_list);

// Custom write function
int _output_char(char c);

// Printing Funcs
int p_char(va_list list);
int p_string(va_list list);
int p_percent(attribute((unused)) va_list list);

#endif // MAIN_H