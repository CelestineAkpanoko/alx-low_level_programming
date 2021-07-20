#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - another dog struct
 * @name: the dog's name
 * @age: the age
 * @owner: the owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;
	int name_new = 0, owner_new = 0;

	if (name != NULL && owner != NULL)
	{
		name_new = strlen(name) + 1;
		owner_new = strlen(owner) + 1;
		dog_ptr = malloc(sizeof(dog_t));

		if (dog_ptr == NULL)
			return (NULL);

		dog_ptr->name = malloc(sizeof(char) * name_new);

		if (dog_ptr->name == NULL)
		{
			free(dog_ptr);
			return (NULL);
		}
		dog_ptr->owner = malloc(sizeof(char) * owner_new);

		if (dog_ptr->owner == NULL)
		{
			free(dog_ptr->name);
			free(dog_ptr);
			return (NULL);
		}

		dog_ptr->name = strcpy(dog_ptr->name, name);
		dog_ptr->owner = strcpy(dog_ptr->owner, owner);
		dog_ptr->age = age;
	}
	return (dog_ptr);
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;

	return (len);
}

/**
 * _strcpy - copy a string from a source to a destination
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i++] = '\0';

	return (dest);
}

