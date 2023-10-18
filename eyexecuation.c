#include "eyshell.h"

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
	execve(p, arguments, environ);
	exit(0);
	}
	else
	{
	wait(&status);
	status = status >> 8;
	return;
	}
}
