#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's profile
 * @name: The dog's Name
 * @age: The dog's Age
 * @owner: Who owns the dog?
 *
 * Description: No description for this struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
