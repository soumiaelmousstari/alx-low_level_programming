#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog -descripe a dog
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
