#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to add a node at the beginning of the list using recursion
struct Node* addNode(struct Node* head, int data) {
    if (head == NULL) {
        // If the list is empty, create a new node
        return createNode(data);
    } else {
        // Add a new node at the beginning of the list recursively
        struct Node* newNode = createNode(data);
        newNode->next = head;
        return newNode;
    }
}

// Function to print the linked list using recursion
void printList(struct Node* head) {
    if (head == NULL) {
        printf("\n");
        return;
    }
    printf("%d ", head->data);
    printList(head->next);
}

int main() {
    char op;
    struct Node* head = NULL;

    do {
        int data;
        printf("Enter data: ");
        scanf("%d", &data);
        head = addNode(head, data);

        printf("Enter 'y' to add another element (y/n): ");
        scanf(" %c", &op);
    } while (op == 'y' || op == 'Y');

    printf("Entered elements are: ");
    printList(head);

    // Free allocated memory
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

