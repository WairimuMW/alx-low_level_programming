#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: string to check
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++);
	
	return (len);	
}

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, f_write;

	if (!filename)
		return (-1);

	/* create file for writing but if it exists truncate */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* if no text, return empty file -> success */
	if (!text_content)
	{
		close (fd);
		return (1);
	}

	/* write */
	f_write = write(fd, text_content, _strlen(text_content));
	if (f_write == -1 || f_write != _strlen(text_content))
	{
		close (fd);
		return (-1);
	}

	close (fd);
	return (1);
}
