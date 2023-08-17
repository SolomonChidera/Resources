#include <stdio.h>

/**
 * FileName:nestedwhile.c
 * Author: SolomonChidera
 * What does it do: Nested while loop in C.
 */

int main(void)
{
	int a = 0, b;

	while (a < 5)
	{
		b = 0;
		while (b < 5)
		{
			printf("2 ");
			b++;
		}

		putchar(10);
		a++;
	}
	return(0);
}
