#include "main.h"
/**
 * p_integer - print numbers to the function
 * @args: List of args
 * Return: The number of args
 */
int p_integer(va_list args)
{
	int n_arg;
	int d, lnght;
	unsigned int numbrs;

	n_arg  = va_arg(args, int);
	d = 1;
	lnght = 0;

	if (n_arg < 0)
	{
		lnght += _output_char('-');
		numbrs = n_arg * -1;
	}
	else
		numbrs = n_arg;

	for (; numbrs / d > 9; )
		d *= 10;
	for (; d != 0; )
	{
		lnght += _output_char('0' + numbrs / d);
		numbrs %= d;
		d /= 10;
	}

	return (lnght);
}

/**
 * p_uns_num - Print unsigned number
 * @n: unsigned int
 * Return: total nums
 */
int p_uns_num(unsigned int n)
{
	int d;
	int lngth;
	unsigned int nmbrs;

	d = 1;
	lngth = 0;

	nmbrs = n;

	for (; nmbrs / d > 9; )
		d *= 10;

	for (; d != 0; )
	{
		lngth += _output_char('0' + nmbrs / d);
		nmbrs %= d;
		d /= 10;
	}

	return (lngth);
}
