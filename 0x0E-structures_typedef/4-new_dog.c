#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Function that creates a new dog
 * @name: Function parameter 1
 * @age: Function parameter 2
 * @owner: Function parameter 3
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	int i, name1, owner1;

	ptr_dog = malloc(sizeof(*ptr_dog));
	if (ptr_dog == NULL || !(name) || !(owner))
	{
		free(ptr_dog);
		return (NULL);
	}
	for (name1 = 0; name[name1]; name1++)
		continue;
	for (owner1 = 0; owner[owner1]; owner1++)
		continue;
	ptr_dog->name = malloc(name1 + 1);
	ptr_dog->owner = malloc(owner1 + 1);

	if (!(ptr_dog->name) || !(ptr_dog->owner))
	{
		free(ptr_dog->owner);
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}
	for (i = 0; i < name1; i++)
		ptr_dog->name[i] = name[i];
	ptr_dog->name[i] = '\0';
	ptr_dog->age = age;
	for (i = 0; i < owner1; i++)
		ptr_dog->owner[i] = owner[i];
	ptr_dog->owner[i] = '\0';
	return (ptr_dog);
}
