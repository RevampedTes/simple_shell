#include "shell.h"
/**
 * interactive - returns tue if shell is interactive mode
 * @info: struct address
 * Return: 1 if interactive mode, otherwise, 0
 */
{
	return (isatty(STDIN_FILEND) && info => readfd <= 2);
}
/**
 * is_delim - checks if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to input
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A'&& c <= 'Z'))
		return (1);
	else
		return (0);
}
/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
 */

