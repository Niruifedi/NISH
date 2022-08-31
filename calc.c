#include "main.h"

/**
 * do_add - this Function sums up the arguments passed
 * x: first argument
 * y: second argument
 * Return: 0 on success
 */

int do_add(int x, int y)
{
	int add;

	add = x + y;

	return (add);
}

/**
 * do_sub - this Function performs a subtraction on the arguments passed
 * x: first argument
 * y: second argument
 * Return: 0 on success
 */

int do_sub(int x, int y)
{
	int sub;

	sub = x - y;

	return (sub);
}

/**
 * do_mul - this Function does a multiplication the arguments passed
 * x: first argument
 * y: second argument
 * Return: 0 on success
 */

int do_mul(int x, int y)
{
	int mul;

	mul = x * y;

	return (mul);
}

/**
 * do_div - this Function divides the arguments passed
 * x: first argument
 * y: second argument
 * Return: 0 on success
 */

int do_div(int x, int y)
{
	int divide;

	divide = x / y;

	return (divide);
}

/**
 * do_mod - this Function returns the remainder of arguments passed
 * x: first argument
 * y: second argument
 * Return: 0 on success
 */

int do_mod(int x, int y)
{
	int rem;

	rem = x % y;

	return (rem);
}

/**
 * do_expo - this Function sums up the square of the arguments passed
 * x: first argument
 * Return: 0 on success
 */

int do_expo(int x)
{
	int sum;

	sum = x * x;

	return (sum);
}
