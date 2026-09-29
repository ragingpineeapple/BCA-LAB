#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
	int data;
	struct Node *next;
} Node;

static Node *create_node(int value)
{
	Node *node = malloc(sizeof(*node));
	if (node == NULL) {
		fprintf(stderr, "Unable to allocate memory.\n");
		return NULL;
	}

	node->data = value;
	node->next = NULL;
	return node;
}

static int insert_at_start(Node **head, Node **tail, int value)
{
	Node *node = create_node(value);
	if (node == NULL) {
		return 0;
	}

	node->next = *head;
	*head = node;
	if (*tail == NULL) {
		*tail = node;
	}
	return 1;
}

static int delete_at_end(Node **head, Node **tail, int *value)
{
	if (*head == NULL) {
		return 0;
	}

	Node *current = *head;
	if (current->next == NULL) {
		*value = current->data;
		free(current);
		*head = NULL;
		*tail = NULL;
		return 1;
	}

	while (current->next->next != NULL) {
		current = current->next;
	}

	*value = current->next->data;
	free(current->next);
	current->next = NULL;
	*tail = current;
	return 1;
}

static void display_list(const Node *head)
{
	if (head == NULL) {
		printf("List is empty.\n");
		return;
	}

	printf("List: ");
	while (head != NULL) {
		printf("%d -> ", head->data);
		head = head->next;
	}
	printf("NULL\n");
}

static void free_list(Node *head)
{
	while (head != NULL) {
		Node *next = head->next;
		free(head);
		head = next;
	}
}

int main(void)
{
	Node *head = NULL;
	Node *tail = NULL;
	int choice;
	int value;

	do {
		printf("\n--- Linked List Operations ---\n");
		printf("1. Insert at start\n");
		printf("2. Delete at end\n");
		printf("3. Display list\n");
		printf("0. Exit\n");
		printf("Enter your choice: ");

		if (scanf("%d", &choice) != 1) {
			printf("Invalid input. Exiting.\n");
			break;
		}

		switch (choice) {
		case 1:
			printf("Enter value: ");
			if (scanf("%d", &value) != 1) {
				printf("Invalid input. Exiting.\n");
				free_list(head);
				return 1;
			}
			if (insert_at_start(&head, &tail, value)) {
				printf("Value inserted.\n");
			}
			break;
		case 2:
			if (delete_at_end(&head, &tail, &value)) {
				printf("Deleted from end: %d\n", value);
			} else {
				printf("List is empty.\n");
			}
			break;
		case 3:
			display_list(head);
			break;
		case 0:
			break;
		default:
			printf("Invalid choice. Try again.\n");
		}
	} while (choice != 0);

	free_list(head);
	return 0;

}

/*
SECOND
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
	int data;
	struct Node *next;
} Node;

Node *createnode(int value);
int nq(Node **head, int value);
int dq(Node *head);
void pq(Node *head);

int main(void){
	Node* head = NULL;

	printf("\nnq: %d\n", nq(&head, 4));
	printf("Printing linked\n");
	pq(head);
	printf("\nnq: %d\n", nq(&head, 5));
	printf("\nnq: %d\n", nq(&head, 6));
	printf("Printing linked\n");
	pq(head);
	printf("\ndq: %d\n", dq(head));
	printf("Printing linked\n");
	pq(head);
	printf("\nnq: %d\n", nq(&head, 9));
	printf("Printing linked\n");
	pq(head);
}

Node *createnode(int value){
	Node *node = (Node *)malloc(sizeof(Node *));
	if(node == NULL){
		printf("Unable to allocate memory.\n");
		return NULL;
	}

	node->data = value;
	node->next = NULL;
	return node;
}

int nq(Node **head, int value){
	Node *node = createnode(value);
	if(node == NULL){
		return -69;
	}
	node->next = *head;
	*head = node;
	return 1;
}

int dq(Node **head){
    if(*head == NULL){
        return -8697;
    }

    // Only one node
    if((*head)->next == NULL){
        int data = (*head)->data;
        free(*head);
        *head = NULL;
        return data;
    }

    Node *temp = *head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }

    int data = temp->next->data;
    free(temp->next);
    temp->next = NULL;
    return data;
}

void pq(Node *head){
	if(head == NULL){
		return;
	}

	Node* temp = head;
	while(temp != NULL){
		printf("%d, ", temp->data);
		temp=temp->next;
	}
}
