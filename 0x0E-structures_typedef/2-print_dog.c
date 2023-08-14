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
		printf("(nill)");
	if (d->name == NULL)
		printf("%s:(nil)", d->name);
	if (d->age == NULL)
		printf("%f:(nil)", d->age);
	if (d->owner == NULL)
		printf("%s:(nil)", d->owner);
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
