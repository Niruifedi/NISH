#include "main.h"


int main(void)
{
	int y = 60;
	int x = 500;
	int result, new, times, divide, remainder, expo;

	result = do_add(y, x);

	expo = do_expo(x);

	times = do_mul(y, x);

	new = do_sub(x, y);

	divide = do_div(x, y);

	remainder = do_mod(x, y);

	printf("Addition: %d\n", result);
	printf("Division: %d\n", divide);

	printf("Multiplication: %d\n", times);
	printf("Subtraction: %d\n", new);

	printf("Modulous: %d\n", remainder);
	printf("Exponential: %d\n", expo);


	return (0);
}
