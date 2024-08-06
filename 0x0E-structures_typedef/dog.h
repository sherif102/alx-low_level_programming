#ifndef DOG
#define DOG
/**
 * struct dog - dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: This is a structure defining dog information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG */

#ifndef INIT_DOG
#define INIT_DOG
/**
 * init_dog - initializes dog structure
 * @d: the dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* INIT_DOG */

void print_dog(struct dog *d);
