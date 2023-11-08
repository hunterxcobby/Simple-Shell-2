#ifndef CUSTOM_SHELL_H
#define CUSTOM_SHELL_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <dirent.h>
#include <signal.h>
#include <unistd.h>
#include <fcntl.h>

size_t custom_string_length(const char *str);
char *custom_string_duplicate(const char *str);
char *custom_string_copy(char *destination, char *source);
int custom_string_compare(const char *first_str, const char *second_str);
char *custom_concatenate(char *target_str, char *str_to_add);

/* global variables */
extern char **environ;
#endif
