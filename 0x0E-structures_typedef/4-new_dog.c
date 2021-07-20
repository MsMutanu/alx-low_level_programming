#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: struct of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_len, owner_len;

	dog_t *new_dog = NULL;

	name_len = 0, owner_len = 0;
	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
	}

	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		new_dog->ame[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		new_dog->owner[i] = owner[i];
	new_dog->age = age;
	return (new_dog);
}
