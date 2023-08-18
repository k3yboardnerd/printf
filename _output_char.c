#include "main.h"

/**
 * _output_char - writes the char ch to stdout
 * @ch: the char to print
 * Return: 1 / -1
*/
int _output_char(char ch)
{
	return (write(1, &ch, 1));

}
