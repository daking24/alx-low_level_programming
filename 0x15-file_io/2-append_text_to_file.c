/*
 * Auth: King David Ajayi
 * File: 2-append_text_to_file.c
 */

#include "main.h"

/**
 * _strlen - Length of given string
 * @s: The string
 *
 * Return: Length of string.
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * append_text_to_file - Appends text to EOF/ 'end of file'.
 * @filename: Name of file.
 * @text_content: the NULL terminated string to add at the EOF
 *
 * Return: 1 on success, else -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t n_written = write(fd, text_content, _strlen(text_content));

		if (n_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
