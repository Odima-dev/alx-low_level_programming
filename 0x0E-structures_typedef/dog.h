#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef created for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - structure for dogs
 * @name: first participant
 * @age: second participant
 * @owner: third participant
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
