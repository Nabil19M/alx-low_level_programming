#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner) {
  dog_t *dog = malloc(sizeof(*dog));
  if (dog == NULL || name == NULL || owner == NULL) {
    return NULL;
  }

  dog->name = strdup(name);
  dog->owner = strdup(owner);
  dog->age = age;

  return dog;
}
