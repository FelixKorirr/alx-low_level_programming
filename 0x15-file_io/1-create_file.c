#include "main.h"

/**
 * create_file - func that creates a file.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to a string to write to the file.
 * Return: -1 if function fails, else 1.
 */

int create_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, z);

	if (x == -1 || y == -1)
	{
		return (-1);
	}

	close(x);

	return (1);
}
