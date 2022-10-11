#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 * @str: thr string input
 * Return: return the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string @src to @dest
 * @src: the string to copy
 * @dest: the buffer to store the string copy
 * Return: pointer to @dest
 */
char *_strcopy(char *src, char *dest)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 * Return: return the struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(name, dog->name);
	dog->age = age;
	dog->owner = _strcopy(owner, dog->owner);

	return (dog);
}
