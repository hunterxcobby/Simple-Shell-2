#include "custom_shell.h"
/**
 * custom_concatenate - concatenates two strings
 * @target_str: string to append to
 * @str_to_add: string to add
 *
 * Return: a pointer to the resulting string
 */
char *custom_concatenate(char *target_str, char *str_to_add)
{
	int index1, index2;

	index1 = 0;
	while (target_str[index1] != '\0')
		index1++;

	index2 = 0;
	while (str_to_add[index2] != '\0')
	{
		target_str[index1] = str_to_add[index2];
		index2++;
		index1++;
	}
	target_str[index1] = '\0';

	return (target_str);
}



/**
 * custom_string_compare - compares two strings
 * @first_str: first string to compare
 * @second_str: second string to compare
 *
 * Return: 0 if strings are equal, positive if first_str is greater,
 * negative if second_str is greater
 */
int custom_string_compare(const char *first_str, const char *second_str)
{
	while (*first_str && *second_str && *first_str == *second_str)
	{
		first_str++;
		second_str++;
	}

	if (*first_str == *second_str)
		return 0;
	else if (*first_str > *second_str)
		return 1;
	else
		return -1;
}


/**
 * custom_string_copy - copies the string pointed to by source
 * including the terminating null byte (\0)
 * to the buffer pointed to by destination
 * @destination: string to copy into
 * @source: string to be copied
 *
 * Return: a pointer to the resulting string
 */
char *custom_string_copy(char *destination, char *source)
{
	int index = 0;

	while (source[index] != '\0')
	{
		destination[index] = source[index];
		index++;
	}

	destination[index] = '\0';

	return destination;
}



/**
 * custom_string_duplicate - duplicates a string
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string
 */
char *custom_string_duplicate(const char *str)
{
	size_t i;
	size_t length = custom_string_length(str);
	char *new_string = (char *)malloc(length + 1);

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		new_string[i] = str[i];

	return new_string;
}


/**
 * custom_string_length - calculates the length of a string
 * @str: input string
 *
 * Return: length of the string
 */
size_t custom_string_length(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
		length++;

	return length;
}
