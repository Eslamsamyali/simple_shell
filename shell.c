#include "shell.h"
/**
 * run_shell - Start and run the simple shell
 */

void run_shell(void)
{
	char *input = NULL;
	size_t len = 0;
	ssize_t read;

	while (1)
	{
		printf("$ ");
		read = getline(&input, &len, stdin);

		if (read == -1)
		{
			if (feof(stdin))
			{
				printf("\n");
				break;
			}
			perror("getline");
			exit(EXIT_FAILURE);
		}

		if (input[read - 1] == '\n')
			input[read - 1] = '\0';

		if (strcmp(input, "exit") == 0)
		{
			free(input);
			exit(EXIT_SUCCESS);
		}
		else if (strcmp(input, "env") == 0)
		{
			print_environment();
		}
		else
		{
			execute_command(input);
		}
	}
	free(input);
}
