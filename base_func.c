#include "main.h"
/**
 * p_bin - Convert numbrber from base 10 to binary
 * @list: List of args
 * Return: total len of numbrws
 */
int p_bin(va_list list)
{
	unsigned int numbr;
	int i, lngth;
	char *strng;
	char *r_str;

	numbr = va_arg(list, unsigned int);
	if (numbr == 0)
		return (_write_char('0'));
	if (numbr < 1)
		return (-1);
	lngth = b_length(numbr, 2);
	strng = malloc(sizeof(char) * lngth + 1);
	if (strng == NULL)
		return (-1);

	for (i = 0; numbr > 0; i++)
	{
		if (numbr % 2 == 0)
			strng[i] = '0';
		else
			strng[i] = '1';
		numbr = numbr / 2;
	}
	strng[i] = '\0';
	r_str = rev_str(strng);
	if (r_str == NULL)
		return (-1);
	output_base(r_str);
	free(strng);
	free(r_str);
	return (lngth);
}

/**
 * rev_str - reverse the string
 *
 * @s: string to be revers
 * Return: pointer to char
 */
char *rev_str(char *s)
{
	int lngth;
	int h;
	char t;
	char *d;

	lngth = 0;

	while (s[lngth] != '\0')
	{
		lngth++;
	}

	d = malloc(sizeof(char) * lngth + 1);
	if (d == NULL)
		return (NULL);

	_memocpy(d, s, lngth);
	for (h = 0; h < lngth; h++, lngth--)
	{
		t = d[lngth - 1];
		d[lngth - 1] = d[h];
		d[h] = t;
	}
	return (d);
}

/**
 * b_length - gives length of o number
 * @num: number to be calucated
 * @b: base to be calculated
 * Return: length of a number
 */
unsigned int b_length(unsigned int num, int b)
{
	unsigned int m;

	for (m = 0; num > 0; m++)
	{
		num = num / b;
	}
	return (m);
}

/**
 * _memocpy - copies memory
 * @d:  destination to be copied
 * @src: Source to copy
 * @n: number of bytes to copy
 * Return: pointer to destination.
 */
char *_memocpy(char *d, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		d[i] = src[i];
	d[i] = '\0';
	return (d);
}

/**
 * output_base - characters to be printed
 * @str: String to analyzed
 */
void output_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_output_char(str[i]);
}
