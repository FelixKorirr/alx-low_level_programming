#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - func that allocates 1024 bytes to buffer.
 * @file: name of the file buffer is storing chars for.
 * Return: Pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes the file descriptors.
 * @fd: The file descriptor to be closed.
 */

void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: no of arguments given to the program.
 * @argv: Array of pointers to the arguments.
 * Return: 0 on success.
 *
 * Description: If no of arguments is incorrect - exit code 97.
 * If file_from does not exist or can't be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If the file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int f, t, x, y;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	x = read(f, buf, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		y = write(t, buf, x);
		if (t == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		x = read(f, buf, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (x > 0);

	free(buf);
	close_file(f);
	close_file(t);

	return (0);
}

