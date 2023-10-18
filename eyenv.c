#include "eyshell.h"
/**
 * _get_enviornment - find an env
 * @variable: name of var
 * @enviornment: array of env
 * Return: variable
 */
int _get_enviornment(char *variable, char **enviornment)
{
	int t;

	if (enviornment == NULL || variable == NULL)
		return (-1);

	for (t = 0; enviornment[t] != NULL; t++)
	{
		if (_var_compare(variable, enviornment[t]) == 1)
			return (t);
	}
	return (-1);
}
