#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

int main(void)
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	struct node *current = malloc(sizeof(struct node));
	current->data = 98;
	current->link = NULL;
	head->link = current;

	printf("%p\n", head->link);
	printf("%p\n", current->link);
	printf("%d\n", current->data);
	printf("%d\n", head->data);
	return 0;
}
