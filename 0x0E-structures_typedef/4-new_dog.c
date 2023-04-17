#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog - creates a new dog.
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: pointer to new dog or NULL .
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL || name == NULL || owner == NULL)
		return (NULL);
	(*dog).name = malloc(strlen(name));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).owner = malloc(strlen(owner));
	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	(*dog).name = name;
	(*dog).age = age;
	(*dog).owner = owner;
	return (dog);
}
