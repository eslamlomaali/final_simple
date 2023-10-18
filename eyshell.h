#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <errno.h>

/**
 * struct beltins - helper
 * @nnnnn: name
 * @ppppp: pointer
 * Description: helper
 */
typedef struct beltins
{
	char *nnnnn;
	int (*ppppp)(char **);
} b_bt;

extern char **environ;
extern int status;

/* prototypes */
int is_access(char *command, char *arguments[]);
void sh_execuation(char *p, char *arguments[]);
void p_error(char *massage, char *sh, char *command, int hack);
int back_env(char **e);
int exit_shell(char **arguments);
int ee(char **e);
int _get_enviornment(char *variable, char **enviornment);
int _built(char *command, char **arguments);
int is_path_found(char *command, char **arguments);
char *_string_concatenate(char *string1, char *string2);
char *_string_copy(char *d, char *s);
int _var_compare(char *variable, char *e);
int _string_length(const char *c);
int _string_compare(const char *string1, const char *string2);
int main(int argc, char *argv[]);

#endif
