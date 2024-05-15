#include <stdio.h>
#include <stdlib.h>

// Structure declaration
typedef struct node {
    int data;
    struct node* next;
} Node;

// Function prototype
void printCList(Node* current, const Node* head);

// Function definition to print elements in reverse order
void printCList(Node* current, const Node* head) {
   if (current == head) { // Base case: Reached the beginning of the list
        printf("%d ", current->data);
        return;
   }
    printCList(current->next, head); // Recursively call for next node
    printf("%d ", current->data); // Print data after returning from recursive call
}

int main() {
    Node* head = NULL;
    char choice;

    do {
        Node* newNode = malloc(sizeof(Node));
        if (newNode == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL) { // If list is empty, set newNode as head
            head = newNode;
            newNode->next = head; // Point back to itself for circularity
        } else {
            newNode->next = head->next; // Insert newNode after head
            head->next = newNode; // Update next of head to newNode
            head = newNode; // Update head to newNode
        }

        printf("Do you want to add another element? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y');

    // Print circular list in reverse order
    printf("Elements in reverse order: ");
    printCList(head, head);

    // Free memory
    Node* temp;
    while (head->next != head) {
        temp = head->next;
        head->next = temp->next;
        free(temp);
    }
    free(head);

    return 0;
}

