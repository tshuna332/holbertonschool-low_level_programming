#include "holberton.h"

/**
*read_textfile - Rean text file
*@filename: name of file
*@letters: number letters print
*
*Return: letters prints
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, sz, rw;
	char *c;

	if (filename == NULL)
		return (0);

	c = malloc(letters * sizeof(char));
	if (c == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		free(c);
		return (0);
	}

	sz = read(fd, c, letters);

	rw = write(STDOUT_FILENO, c, sz);

	free(c);
	close(fd);

	if (rw < 0 || rw < sz)
	{
		return (0);
	}

	return (sz);
}
