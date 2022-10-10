#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog
 * @d: variable name
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
