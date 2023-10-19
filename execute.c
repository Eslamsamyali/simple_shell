#include "shell.h"
/**
 * execute_command - Execute a command with its arguments
 * @command: The command to execute
 */

void execute_command(char *command)
{
	char *args[128];
	int i = 0;

	char *token = strtok(command, " ");

	while (token != NULL)
	{
		args[i] = token;
		i++;
		token = strtok(NULL, " ");
	}

	args[i] = NULL;
	if (access(args[0], X_OK) == 0)
	{
		if (fork() == 0)
		{
			if (execve(args[0], args, NULL) == -1)
			{
				perror("execve");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			wait(NULL);
		}
	}
	else
	{
		printf("%s: command not found\n", args[0]);
	}
}
