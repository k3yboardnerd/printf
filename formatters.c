#include "main.h"

/**
 * p_char - Print char
 * @list: list of args
 * Return: total chars to be outputed
 */
int p_char(va_list list)
{
	_output_char(va_arg(list, int));
	return (1);
}

/**
 * p_string - Print all strings
 * @list: list of args
 * Return: total chars to be outputed
 */
int p_string(va_list list)
{
	int i = 0;
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		_output_char(str[i]);

		i++;
	}

	return (i);
}

/**
 * p_percent - Prints percentage symbol
 * @list: list of args
 * Return: the % as output
 */
int p_percent(__attribute__((unused)) va_list list)
{
	_output_char('%');
	return (1);
}
