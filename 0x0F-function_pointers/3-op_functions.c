#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * op_add - finds sum of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: sum of a and b.
 * korir codes
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - finds the difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: difference of a and b.
 * korir codes
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - finds the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns remainder after dividing two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder of the division of a by b.
 * korir codes
 */
int op_mod(int a, int b)
{
	return (a % b);
}
