#include "main.h"

/**
 * read_textfile- Reads a text file and prints it to STDOUT.
 * @filename: text file
 * @letters: amount of letters to be read
 * Return: if function fails or filename is NULL,return 0
 * else actual number of letters.
 * korir codes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *space;

	x = open(filename, O_RDONLY);

	if (x == -1)
	{
		return (0);
	}

	space = malloc(sizeof(char) * letters);
	z = read(x, space, letters);
	y = write(STDOUT_FILENO, space, z);

	free(space);
	close(x);
	return (y);
}
