#ifndef	MY_DOG
#define MY_DOG

/**
 * struct dog - dog description
 * @name: name of dog
 * @age: dog's name
 * @owner: Name of dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*MY_DOG*/
