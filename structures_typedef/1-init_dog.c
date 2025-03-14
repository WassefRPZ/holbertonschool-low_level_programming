#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initialise les champs d'une structure dog
 * @d: Pointeur vers une structure dog
 * @name: Nom du chien
 * @age: Age du chien
 * @owner: Propriétaire du chien
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
