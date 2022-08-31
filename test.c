#include "main.h"


int main(int argc, char *argv[])
{
	int i;
	int j;
	int one, three, res;

	if (argv[1] == 0)
	{
		printf("Usage./test <4 + 4> or <4 - 3> or <4 x 4>\n");
	}
	else if((*argv[2]) == '+')
	{
		one = atoi(argv[1]);
		three = atoi(argv[3]);
		res = do_add(one, three);
		printf("%d\n", res);
	}
	else if ((*argv[2]) == 'x')
	{
		one = atoi(argv[1]);
		three = atoi(argv[3]);
		res = do_mul(one, three);
		printf("%d\n", res);
	}
	else if ((*argv[2]) == '/')
	{
		one = atoi(argv[1]);
		three = atoi(argv[3]);
		res = do_div(one, three);
		printf("%d\n", res);
	}
	else if ((*argv[2]) == '-')
	{
		one = atoi(argv[1]);
		three = atoi(argv[3]);
		res = do_sub(one, three);
		printf("%d\n", res);
	}
	else if ((*argv[2]) == '%') // this function is not giving me the desired out for modulous calc
	{ // % symbol gets flagged by bash with error message "bash: printf: `\': invalid format character" 
		one = atoi(argv[1]);
		three = atoi(argv[3]);
		res = do_mod(one, three);
		printf("%d\n", res);
	}

	return (0);
}
