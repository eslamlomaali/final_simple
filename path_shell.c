#include "shell.h"

/**
 * is_path_found - finds command in path
 * @command: command line
 * @arguments: args
 *
 * Return: full path if it found
 */

int is_path_found(char *command, char **arguments)
{
	char *q;
	char *m, *n;
	int i = 0, r, st, l, w;

	r = _get_enviornment("PATH", iron);
	if (r < 0)
		return (1);

	l = _string_length(iron[r]) - 4;
	if (l == 1)
		return (1);

	m = malloc(sizeof(char) * l);
	if (m == NULL)
		return (1);

	_string_copy(m, iron[r] + 5);

	n = m;
	r = 0;
	for (i = 0; i < l; i++)
	{

		if (n[i] == ':' || n[i] == '\0')
		{
			w = n[i];
			n[i] = '\0';
			q = malloc(sizeof(char) * (i + _string_length(command) + 2));
			_string_copy(q, n);
			_string_concatenate(q, "/");
			_string_concatenate(q, command);
			st = access(q, X_OK);
			if (st == 0)
			{
				free(m);
				sh_execuation(q, arguments);
				free(q);
				return (0);
			}
			else
			{
				free(q);
				if (w)
					n += (i + 1);
				l -= i;
				i = 0;

	}
		}
	}
	free(m);
	return (1);
}
