#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of chars and
 * intitalize it with specific char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, otherwise, NULL
 */

char *create_array(unsigned int size, char c)

{

	char *s;

	unsigned int x;



	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)

		return (NULL);

	for (x = 0; x < size; x++)

		s[x] = c;

	return (s);

}
