#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog -creates a new dog
 *
 * @name: name of the dog
 * @age: Age of dog
 * @owner: Owner of dog's name
 *
 * Return: p
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	/*allocating memory for the struct*/
	p = malloc(sizeof(dog_t));

	if (p != NULL)
	{
		p->name = name;
		p->age = age;
		p->owner = owner;
	}
	else
		return (NULL);
}
