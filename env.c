#include "shell.h"
/**
 * print_environment - Print the current environment variables.
 *
 * This function is responsible for processing the "env" built-in command in
 * the simple shell. When the user enters "env," this function is called to
 * display the current environment variables, including information about
 * the user's environment, such as their username, system settings, and the
 * working directories.
 *
 * The function accesses the `environ` variable to access and print the
 * environment variables and keeps printing them until it reaches the end
 * of the environment list.
 */

void print_environment(void)
{
	char **env_var = environ;

	while (*env_var)
	{
		printf("%s\n", *env_var);
		env_var++;
	}
}
