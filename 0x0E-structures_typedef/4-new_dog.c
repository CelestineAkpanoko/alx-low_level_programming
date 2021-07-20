#include <stdlib.h>
#include "dog.h"


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
