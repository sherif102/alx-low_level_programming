#ifndef DOG
#define DOG
/**
 * struct dog - dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: This is a structure defining dog information
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif /* DOG */

#ifndef INIT_DOG
#define INIT_DOG
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* INIT_DOG */

#ifndef PRINT_DOG
#define PRINT_DOG
void print_dog(struct dog *d);
#endif /* PRINT_DOG */

#ifndef NEW_DOG
#define NEW_DOG
dog_t *new_dog(char *name, float age, char *owner);
#endif /* NEW_DOG */
