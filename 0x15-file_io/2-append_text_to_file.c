#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: string to check
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++);

	return (len);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add to the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, f_write;

	if (!filename)
		return (-1);

	/* open file if it exists, return -1 if it doesn't */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* if no text, return success */
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
