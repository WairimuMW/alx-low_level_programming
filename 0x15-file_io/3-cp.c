#include "main.h"

/**
 * __exit - print error message and exit with the specific error code
 * @error: exit value
 * @f: file name
 * @fd: file descriptor
 *
 * Return: 0 on success
 */
int __exit(int error, char *f, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit (error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
			exit (error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
			exit (error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",fd);
			exit (error);
		default:
			return (0);
	}
}

/**
 * main - copies the contents of a file to another file
 * @argc: argument count (should be 3)
 * @argv: (1) file to copy from, (2) file to copy to
 *
 * Return: 0 if success, exit code (97 - 100) if error
 */
int main (int argc, char *argv[])
{
	int fd1, fd2, f_read, f_write;
	char *buff[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	/* set file descriptor for source file */
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		__exit(98, argv[1], 0);

	/* set file descriptor for destination file */
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		__exit(99, argv[2], 0);

	/* read source file and copy contents to destination file */
	while ((f_read = read(fd1, buff, 1024)) != 0)
	{
		if (f_read == -1)
			__exit(98, argv[1], 0);

		f_write = write(fd2, buff, f_read);
		if (f_write == -1)
			__exit(99, argv[2], 0);
	}

	close (fd1) == -1 ? (__exit(100, NULL, fd1)) : close (fd1);
	close (fd2) == -2 ? (__exit(100, NULL, fd2)) : close (fd2);

	return (0);
}
