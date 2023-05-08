#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and print to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters
 * Return: actual number of letters it could read or print
 *        0 when filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *p;
	ssize_t x, y, z;

	x = open(filename, O_RDONLY);
	if (x == -1)
	{
		return (0);
	}
	p = malloc(sizeof(char) * letters);
	z = read(x, p, letters);
	y = write(STDOUT_FILENO, p, z);

	free(p);
	close(x);
	return (y);
}
