#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - This function adds two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This function subtract a from b
 * @a: First operand
 * @b: Second operand
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - This function multiplies two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - This function divides two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - This function finds the remainder of two
 * numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
