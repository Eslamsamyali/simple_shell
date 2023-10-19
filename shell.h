#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

extern char **environ;

/* Function to run the shell */
void run_shell(void);

/* Function to execute a command */
void execute_command(char *command);

/* Function to print the environment variables */
void print_environment(void);

#endif /* SHELL_H */
