#include "3-calc.h"

/**
* op_add - returns the sum of a and b
* @a: integer to add
* @b: integer to add
*
* Return: the sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - returns the difference of a and b
* @a: integer to substract from
* @b: integer to substract
* Return: the substraction of two integers
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - returns the product of a and b
* @a: integer to multiply
* @b: integer to multiply
* Return: the multiplication of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - returns the result of the division of a by b
* @a: integer to divide
* @b: integer to devide by
* Return: the division of a and b
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - returns the remainder of the division of a by b
* @a: integer to modulo
* @b: integer to modulo by
* Return: the remainder of a by b
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
