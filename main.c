#include "shell.h"
/**
 * main - Entry point for the simple shell program.
 * This function initializes the shell and enters the main loop, which reads.
 * user input, processes it, and executes commands. The shell supports the
 * "exit" built-in command to exit the shell and the "env" built-in command to
 * print the current environment variables. Other commands entered by the user
 * are executed using the `execute_command` function.
 * Return: The main function does not return, the program runs until the user
 * exits the shell using the "exit" command or encounters the end-of-file
 * condition (Ctrl+D).
 */

int main(void)
{
	run_shell();
	return (0);
}
