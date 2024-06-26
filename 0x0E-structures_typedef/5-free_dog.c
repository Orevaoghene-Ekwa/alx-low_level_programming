#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory allocated for struct dog
 * @d: Entry
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
