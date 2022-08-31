#include "main.h"

/**
 * Add - this Function sums up the arguments passed
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

int do_sub(int x, int y)
{
	int sub;

	sub = x - y;

	return (sub);
}

int do_mul(int x, int y)
{
	int mul;

	mul = x * y;

	return (mul);
}

int do_div(int x, int y)
{
	int divide;

	divide = x / y;

	return (divide);
}

int do_mod(int x, int y)
{
	int rem;

	rem = x % y;

	return (rem);
}

int do_expo(int x)
{
	int sum;

	sum = x * x;

	return (sum);
}

