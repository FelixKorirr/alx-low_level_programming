#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated to struct dog
 * @d: struct to free
 * korir codes
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
