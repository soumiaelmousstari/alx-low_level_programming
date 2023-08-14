#include <stdio.h>
#include "dog.h"
/**
 * print_dog -prints a struct dog
 * @d: the variableof type struct
 * Return: ...
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return (NULL);
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
