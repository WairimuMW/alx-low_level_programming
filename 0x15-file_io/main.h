#ifndef MAIN_H
#define MAIN_H

/* file descriptor libraries */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* input-output */
#include <stdio.h>

/* file allocation */
#include <stdlib.h>

/* main function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
