
#include "main.h"

char *is_outer(char *element);
void end_func(int x);

/**
 * is_outer - function that allocates 1024 bytes to buf.
 * @el: name of the file.
 * Return: pointer to the buf.
 * korir codes
 */
char *is_outer(char *el)
{
	char *size;

	size = malloc(sizeof(char) * 1024);

	if (size == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write el %s\n", el);
		exit(99);
	}

	return (size);
}

/**
 * end_func - Closes the file descriptors.
 * @x: file descriptor to be closed
 * korir codes
 */

void end_func(int x)
{
	int i;

	i = close(x);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close x %d\n", x);
		exit(100);
	}
}

/**
 * main - Copies contents of file to another.
 * @argc: number of arguments.
 * @argv: Array of pointers to arguments.
 * Return: 0 (Success).
 * korir codes
 */

int main(int argc, char *argv[])
{
	int a, c, d, e;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = is_outer(argv[2]);
	a = open(argv[1], O_RDONLY);
	d = read(a, buf, 1024);
	c = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (a == -1 || d == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read a file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		e = write(c, buf, d);
		if (c == -1 || e == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write c %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		d = read(a, buf, 1024);
		c = open(argv[2], O_WRONLY | O_APPEND);

	} while (d > 0);

	free(buf);
	end_func(a);
	end_func(c);

	return (0);
}
