#include "eyshell.h"

/**
 * p_error - prints error
 * @massage: massage that print
 * @sh:  shell
 * @command: command line
 * @hack: helper
 * Return: error
 */
void p_error(char *massage, char *sh, char *command, int hack)
{
	char n;

	write(STDERR_FILENO, sh, _string_length(sh));
	write(STDERR_FILENO, ": ", 2);
	n = hack + '0';
	write(STDERR_FILENO, &n, 1);
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, command, _string_length(command));
	write(STDERR_FILENO, massage, _string_length(massage));
	status = 127;
}
