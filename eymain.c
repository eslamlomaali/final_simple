#include "eyshell.h"

int status = 0;

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	char *ll = NULL;
	char **tn = NULL;
	int i = 0, meter, mood, calc = 0;
	size_t val = 0;

	do {
		if (isatty(STDIN_FILENO) != 0)
			write(STDOUT_FILENO, "#@EYSHELL$ ", 11);
		argc = calc++;
		meter = getline(&ll, &val, stdin);
		if (meter == -1)
		{
			free(ll);
			exit(0); /*edit from 0 to 127 cancelled*/
		}

		ll[meter - 1] = '\0';
		tn = malloc(sizeof(char *) * meter);
		if (tn == NULL)
		{
			perror("not allocated mem\n");
			continue;
		}
		i = 0;
		tn[0] = strtok(ll, " ");
		while (tn[i] != NULL)
		{
			i++;
			tn[i] = strtok(NULL, " ");
		}
		mood = _built(tn[0], tn);
		if (mood == 0 || mood < 0)
		{
			free(tn);
			continue;
		}
		else if (mood == 69)
		{
			free(ll);
			exit(status); /*edit from status to 127 cancelled*/
		}

		mood = is_path_found(tn[0], tn);
		if (mood == 0 || mood < 0)
		{
			free(tn);
			continue;
		}
		mood = is_access(tn[0], tn);
		if (mood == 0 || mood < 0)
		{
			free(tn);
			continue;
		}
		p_error(": not found\n", argv[0], tn[0], calc);
		free(tn);
	} while (isatty(STDIN_FILENO) || meter != EOF);
	free(ll);

	return (argc = status);
}
