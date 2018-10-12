#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
	return 0;
}

int subtract(int a, int b)
{
	return 0;
}

int multiply(int a, int b)
{
	return 0;
}

int divide(int a, int b)
{
	return 0;
}

int main(int argc, char *argv[])
{
	int a, b;
	int sum, diff, prod, quot;

	if (argc < 3) {
		printf("Not enough arguments\n");
		return -1;
	}

	a = strtol(argv[1], NULL, 0);
	b = strtol(argv[2], NULL, 0);

	sum = add(a, b);
	diff = subtract(a, b);
	prod = multiply(a, b);
	quot = divide(a, b);

	printf("Sum  : %d\n", sum);
	printf("Diff : %d\n", diff);
	printf("Prod : %d\n", prod);
	printf("Quot : %d\n", quot);

	return 0;
}
