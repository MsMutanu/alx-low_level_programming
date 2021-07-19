#ifndef dog_h
#define dog_h

/**
 * struct dog - details of a dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* dog_h */
