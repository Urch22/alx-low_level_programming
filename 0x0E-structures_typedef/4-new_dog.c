#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: Function parameter
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * Parameters:
 * @dest: Function parameter 1
 * @src: Function parameter 2
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, k;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (k = 0; k < len; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * Parameters:
 * @name: Function parameter 1
 * @age: Function parameter 2
 * @owner: Function parameter 3
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
