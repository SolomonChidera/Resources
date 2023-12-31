#include "main.h"

void Mathoperation(int x, int y, int (*operation)(int, int));
int add(int, int);
int subs(int, int);

int add(int a, int b)
{
	return (a + b);
}

int subs(int a, int b)
{
	return (a - b);
}

void Mathoperation(int x, int y, int (*operation)(int, int))
{
	int result;
	result = operation(x, y);
	printf("Result: %d\n", result);
}

int main(void)
{
	Mathoperation(5, 6, add);
	Mathoperation(11, 3, subs);
	return (0);
}
