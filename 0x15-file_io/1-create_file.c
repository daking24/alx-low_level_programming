/*
 * Auth: King David Ajayi
 * File: 1-create_file.c
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
 * create_file - Creates a file.
 *
 * @filename: Name of file.
 * @text_content: NULL terminated string to write to file.
 *
 * Return: 1 on success, else -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t bytes_written = write(fd, text_content, _strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
