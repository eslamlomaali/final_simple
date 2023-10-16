#ininclude "shell.h"

/**
 * back_env - delete env var
 * @e: name
 *  Return: Always 0
 */

int back_env(char **e)
{
	int i;

	i = _get_enviornment(e[1], iron);
	if (i < 0)
	return (1);
	i--;
	while (iron[i] != NULL)
	{
	i++;
	iron[i] = iron[i + 1];
	}
	return (0);
}

/**
 * exit_shell - exit sh
 * @arguments: arguments
 *  Return: Always 0
 */

int exit_shell(char **arguments)
{
	if (arguments[1] == NULL)
	{
	free(arguments);
	return (69);
	}

	return (0);
}

/**
 * ee - enviornment
 * @e: env
 *  Return: Always 0
 */

int ee(char **e)
{
	int y = 0;

	while (iron[y] != NULL && e)
	{
	write(1, iron[y], _string_length(iron[y]));
	write(1, "\n", 1);
	y++;
	}
	st = 0;
	return (0);
}

/**
 * _built - builtin functions
 * @command: command line
 * @arguments: arguments
 *  Return: Always 0
 */

int _built(char *command, char **arguments)
{
	int u = 0;
	b_bt array[4] = {{"exit", exit_shell}, {"enviornment", e},
		{"unsetenviornment", back_env}, {NULL, NULL}};

	if (command == NULL || arguments == NULL)
	return (-1);

	while (array[u].nnnnn != NULL)


	while (array[u].nnnnn != NULL)
	{
	if (_string_compare(array[u].nnnnn, command) == 1)
	{
		return (array[u].ppppp(arguments));
	}
	u++;
	}
	return (1);
}
