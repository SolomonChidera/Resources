#include "main.h"

int main(void)
{
	int r;
	print_last_digit(98);
	print_last_digit(45);
	print_last_digit(998);
	r = print_last_digit(-1094);
	_putchar('0' + r);
	return (0);
}