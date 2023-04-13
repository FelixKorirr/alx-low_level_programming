#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated
* @old_size:is the size, in bytes, of the allocated space for ptr
* @new_size: the new size, in bytes of the new memory block
* Return: pointer allocate new size memory, or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *x;
unsigned int a, c = new_size;
char *old = ptr;


if (ptr == NULL)
{
x = malloc(new_size);
return (x);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);
x = malloc(new_size);
if (x == NULL)
return (NULL);
if (new_size > old_size)
c = old_size;
for (a = 0; a < c; a++)
x[a] = old[a];
free(ptr);
return (x);
}

