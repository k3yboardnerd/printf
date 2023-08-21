#include "main.h"
/**
 * p_octal - Print the numbers in octal base
 * @list: List of  args
 * Return: number of symbols to print
 */
int p_octal(va_list list)
{
	unsigned int numb;
	int len;
	char *octal_rprsnt;
	char *r_strng;

	numb = va_arg(list, unsigned int);

	if (numb == 0)
		return (_output_char('0'));
	if (numb < 1)
		return (-1);
	len = b_length(numb, 8);

	octal_rprsnt = malloc(sizeof(char) * len + 1);
	if (octal_rprsnt == NULL)
		return (-1);
	for (len = 0; numb > 0; len++)
	{
		octal_rprsnt[len] = (numb % 8) + 48;
		numb = numb / 8;

	}
	octal_rprsnt[len] = '\0';
	r_strng = rev_str(octal_rprsnt);
	if (r_strng == NULL)
		return (-1);

	output_base(r_strng);
	free(octal_rprsnt);
	free(r_strng);
	return (len);
}



/**
 * p_HEX - Print  decimal number within base16 with Uppercase
 * @list: List of the args passed
 * Return: number of characters to print
 */

int p_HEX(va_list list)
{
	unsigned int numb;
	int lnght;
	int rem_numb;
	char *hex_rprsnt;
	char *rvrsd_hex;

	numb = va_arg(list, unsigned int);

	if (numb == 0)
		return (_output_char('0'));
	if (numb < 1)
		return (-1);
	lnght = b_length(numb, 16);
	hex_rprsnt = malloc(sizeof(char) * lnght + 1);
	if (hex_rprsnt == NULL)
		return (-1);
	for (lnght = 0; numb > 0; lnght++)
	{
		rem_numb = numb % 16;
		if (rem_numb > 9)
		{
			rem_numb = hex_test(rem_numb, 'X');
			hex_rprsnt[lnght] = rem_numb;
		}
		else
			hex_rprsnt[lnght] = rem_numb + 48;
		numb = numb / 16;
	}
	hex_rprsnt[lnght] = '\0';
	rvrsd_hex = rev_str(hex_rprsnt);
	if (rvrsd_hex == NULL)
		return (-1);
	output_base(rvrsd_hex);
	free(hex_rprsnt);
	free(rvrsd_hex);
	return (lnght);
}

/**
 * hex_test - test hex function to call
 * @numb: numbers to turn it into letters
 * @x: check requried hex function to call
 * Return: Ascii value
 */
int hex_test(int numb, char x)
{
	char *hex_lower = "abcdef";
	char *Hex_upper = "ABCDEF";

	numb = numb - 10;
	if (x == 'x')
		return (hex_lower[numb]);
	else
		return (Hex_upper[numb]);
	return (0);
}
