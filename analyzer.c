#include "main.h"

/**
 * analyzer - Get main string and all parameters to print format string.
 * @format: string have all characters.
 * @funcs_list: list of all the functions.
 * @args_list: list of arguments passed to the program.
 * Return: total characters printed.
 */

int analyzer(const char *format, F_Handler funcs_list[], va_list args_list)
{
	int i, j, r_val, prntd_chars;

	prntd_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; funcs_list[j].symbol != NULL; j++)
			{
				if (format[i + 1] == funcs_list[j].symbol[0])
				{
					r_val = funcs_list[j].handler(args_list);
					if (r_val == -1)
						return (-1);
					prntd_chars += r_val;
					break;
				}
			}
			if (funcs_list[j].symbol == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
					(_output_char(format[i]), _output_char(format[i + 1]), prntd_chars += 2);
				else
					return (-1);
			}
			i = i  + 1;
		}
		else
		{
			_output_char(format[i]);
			prntd_chars++;
		}
	}

	return (prntd_chars);
}
