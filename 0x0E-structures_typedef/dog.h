#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a new struct describing a dog.
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Description: define a new struct describing a dog with name, age, owner.
 **/
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
