#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add -return the sum of two numbers
 * @a: the first number
 * @b: the seconf number
 * Return: the sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub -return the sub of two numbers
 * @a: the first number
 * @b: the seconf number
 * Return: the sub of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -return the mul of two numbers
 * @a: the first number
 * @b: the seconf number
 * Return: the mul of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -return the div of two numbers
 * @a: the first number
 * @b: the seconf number
 * Return: the div of a and b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod -return the mod of two numbers
 * @a: the first number
 * @b: the seconf number
 * Return: the mod of a and b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
