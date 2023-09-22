#include "main.h"

struct node
{
	int data;
	struct node *next;/*Pointer to the next node*/
};

int main(void)
{
	struct node *head;/*The pointer to struct node which is the first node)*/
	head = malloc(sizeof(struct node));

	if (head == NULL)
		return (-1);

	head->data = 45;
	head->next = NULL;

	printf("%d \n", head->data);
	return (0);
}
