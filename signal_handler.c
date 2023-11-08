#include "custom_shell.h"

size_t custom_string_length(const char *str);
/**
 * signal_handler - handles signals for ctrl c
 * @signal: signal number
 * Return: nothing
 */
void signal_handler(int signal)
{
	char *prompt = "\n$ ";

	(void)signal;
	write(1, prompt, custom_string_length(prompt));
	fflush(stdout);
}
