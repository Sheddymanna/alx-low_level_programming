#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: a pointer to the filename
 * @letters: the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 *	if the file can not be opened or read - 0
 *	if filename is NULL - 0
 *	if write fails or does not write the expected amount of bytes - 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t fp;
	ssize_t w;
	ssize_t r;

	if (filename == NULL)
		return (0);

	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	r = read(fp, c, letters);
	w = write(STDOUT_FILENO, c, r);

	if (fp == -1 || r == -1 || w == -1 || w != r)
	{
		free(c);
		return (0);
	}

	free(c);
	close(fp);

	return (w);
}
