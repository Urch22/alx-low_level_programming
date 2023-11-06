#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: Function parameter 1
 * @name: Function parameter 2
 * @age: Function parameter 3
 * @owner: Function parameter 4
 * Return: 0
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
