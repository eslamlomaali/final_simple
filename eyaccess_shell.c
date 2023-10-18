#include "eyshell.h"

/**
 * is_access - is you have permission or not
 * @command: command line
 * @arguments: array of args
 * Return: (1) if you have permission
 */

int is_access(char *command, char *arguments[])
{
	int s;

	s = access(command, X_OK);
	if (s == 0)
	{
	sh_execuation(command, arguments);
	return (0);
	}
	return (1);
}
