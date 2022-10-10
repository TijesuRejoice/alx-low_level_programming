#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *dog
