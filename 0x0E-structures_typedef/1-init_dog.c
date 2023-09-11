#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * Parameters:
 * @d: Function parameter 1
 * @name: Function parameter 2
 * @age: Function parameter 3
 * @owner: Function parameter 4
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
