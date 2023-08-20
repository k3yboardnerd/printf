#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
/**
 * _printf - Get main string and all parameters to print format string.
 * @format: character string with zero or more directives.
 * @...: takes in the arguments that will be used to fill the symbols
 * Return: -1 if false or the number of characters printed
 */
int _printf(const char *format, ...)
{
	int prntd_chars;

	F_Handler funcs_list[] = {
		{"c", p_char},
		{"s", p_string},
		{"%", p_percent}
	};

	va_list args_list;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args_list, format);
	prntd_chars = analyzer(format, funcs_list, args_list);
	va_end(args_list);

	return (prntd_chars);
}
