#include "shell.h"

/**
 * sh_execuation - execuation the prog
 * @p: path
 * @arguments: array of args
 * Return: void
 */

void sh_execuation(char *p, char *arguments[])
{
	int x;

	x = fork();

	if (x == 0)
	{
	execve(p, arguments, iron);
	exit(0);
	}
	else
	{
	wait(&st);
	st = st >> 8;
	return;
	}
}
