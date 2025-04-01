#include <stdio.h>
#include <stdlib.h>

struct node
{
	char *name;
	struct node* link;
};

void count_the_nodes(struct node* head);

int main(void)
{
	struct node *head = malloc(sizeof(struct node));
	head->name = "Osama";
	head->link = NULL;

	struct node *current = malloc(sizeof(struct node));
	current->name = "Ahmed";
	head->link = current;
	current->link = NULL;

	current = malloc(sizeof(struct node));
	current->name = "Amira";
	current->link = NULL;
	head->link->link = current;

	printf("first node name: %s\n", head->name);
	printf("Second node name: %s\n", head->link->name);
	printf("third node name: %s\n", current->name);

	count_the_nodes(head);

	return (0);

}
void count_the_nodes(struct node* head)
{
	int count;
	struct node* ptr;

	count = 0;
	ptr = NULL;

	if(head == NULL)
	{
		printf("the linked list is empty\n");
	}
	ptr = head;
	while(ptr != NULL)
	{
		count++;
		ptr = ptr->link;
	}
	printf("the number of nodes: %d\n", count);
}
