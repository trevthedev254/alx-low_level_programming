#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t rlen, wlen;
	char *buffer;

	if (filename == NULL)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(i);
		return (0);
	}
	rlen = read(i, buffer, letters);
	close(i);
	if (rlen == -1)
	{
		free(buffer);
		return (0);
	}
	wlen = write(STDOUT_FILENO, buffer, rlen);
	free(buffer);
	if (rlen != wlen)
		return (0);
	return (wlen);
}
