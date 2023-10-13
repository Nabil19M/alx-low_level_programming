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
