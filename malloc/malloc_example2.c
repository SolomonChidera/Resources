#include "main.h"

int main(void)
{
	int *tab;
	tab = malloc(sizeof(*tab) * 3);
	*tab = 98;
	tab[1] = -1024;
	tab[2] = 402;
	printf("%d, %d, %d\n", tab[0], tab[1], tab[2]);
	free(tab);

	return (0);
}
