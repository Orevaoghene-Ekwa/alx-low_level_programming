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
void print_dog(struct dog *d);

/**
 * dog_t - new alias for struct dog
 */

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*MY_DOG*/
