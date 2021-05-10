#include <stdio.h>
#include <stdlib.h>
struct list_node
{
	struct list_node *pt_next;
	char *a;
};

int main()
{
	struct list_node* head = malloc(sizeof(struct list_node));

	struct list_node* node1 = malloc(sizeof(struct list_node));
	head->pt_next = node1;
	node1->a = "TongMyong";

	struct list_node* node2 = malloc(sizeof(struct list_node));
	node1->pt_next = node2;
	node2->a = "CISW_Engineering";

	struct list_node* node3 = malloc(sizeof(struct list_node));
	node2->pt_next = node3;
	node3->a = "17110205";

	struct list_node* node4 = malloc(sizeof(struct list_node));
	node3->pt_next = node4;
	node4->a = "Jeong-SooYong";

	node4->pt_next = NULL;

	struct list_node* current = head->pt_next;
	while (current != NULL)
	{
		printf("%s\n", current->a);
		current = current->pt_next;
	}

	free(node4);
	free(node3);
	free(node2);
	free(node1);
	free(head);
	return 0;
}
