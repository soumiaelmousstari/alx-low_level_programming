#include <stdio.h>
#include "dog.h"
/**
 * init_dog -a function that initialize a variable of type
 * @d: varieble the type struct dog
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of dog
 * Retuen: ...
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
