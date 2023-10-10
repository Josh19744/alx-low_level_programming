#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable type of struct dog
 * @d: pointer to the dog to be initialized
 * @name: name of the dog to be initialize
 * @age: age of dog to be initialized
 * @owner: owner of the dog to be initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
