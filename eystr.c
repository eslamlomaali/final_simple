#include "eyshell.h"

/**
 * _string_length - counts the length of string
 * @c: counter
 * Return: -1
 */
int _string_length(const char *c)
{
	unsigned int x = 0;

	if (c == NULL)
		return (-1);

	while (c[x] != '\0')
		x++;
	return (x);
}

/**
 * _var_compare - compares string
 * @variable: name
 * @e: pointer
 * Return: 1 if the variable found, 0 not
 */
int _var_compare(char *variable, char *e)
{
	int a = 0;

	if (variable == NULL || e == NULL)
		return (0);

	while (variable[a] == e[a] || (variable[a] == '\0'))
	{
		if (variable[a] == '\0' && e[a] == '=')
			return (1);
		a++;
	}
	return (0);
}

/**
 * _string_copy - Copy the string
 * @d: string
 * @s: string
 * Return: copy string
 */
char *_string_copy(char *d, char *s)
{
	int b = 0;

	if (s == NULL)
		return (NULL);

	if (d == s || s == 0)
		return (d);
	while (s[b] != '\0')
	{
		d[b] = s[b];
		b++;
	}
	d[b] = '\0';
	return (d);
}

/**
 * _string_compare - compaers two strings
 * @string1: string
 * @string2: string
 * Return: 1 on success, 0 not
 */
int _string_compare(const char *string1, const char *string2)
{
	int z = 0;

	if (string1 == NULL || string2 == NULL)
	return (-1);
	while (string1[z] == string2[z])
	{
	if (string1[z + 1] == '\0' && string2[z + 1] == '\0')
		return (1);
	z++;
	}
	return (0);
}

/**
 * _string_concatenate - concatenate two strings
 * @string1: string
 * @string2: string
 * Return: concatenate strings
 **/
char *_string_concatenate(char *string1, char *string2)
{
	int k = 0;
	int o;

	if (string1 == NULL)
		return (NULL);
	if (string2 == NULL)
		return (string1);

	while (string1[k] != '\0')
		k++;

	for (o = 0; string2[o] != '\0'; o++)
	{
		string1[k] = string2[o];
		k++;
	}
	string1[k] = '\0';
	return (string1);
}
