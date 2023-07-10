#include "main.h"

/**
 * read_textfile - reads a test file and prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: number of letters to be read and printed
 *
 * Return: number of letters read an printed, 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	ssize_t f_read, f_write;
	char *buff;

	if (filename == NULL)
		return (0);

	/* open file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* buffer memory allocation */
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	/* read */
	f_read = read(fd, buff, letters);
	if (f_read == -1)
	{
		free (buff);
		close (fd);
		return (0);
	}

	/* write */
	f_write = write(STDOUT_FILENO, buff, f_read);
	if (f_write == -1)
	{
		free (buff);
		close (fd);
		return (0);
	}

	close (fd);
	return (f_read);
}
