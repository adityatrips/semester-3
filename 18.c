#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void addNode(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    struct Node* lastNode = *headRef;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }
    lastNode->next = newNode;
}

void displayList(struct Node* head) {
    struct Node* currentNode = head;
    while (currentNode != NULL) {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("\n");
}

void incrementData(struct Node* head) {
    struct Node* currentNode = head;
    while (currentNode != NULL) {
        currentNode->data += 10;
        currentNode = currentNode->next;
    }
}

int main() {
    struct Node* head = NULL;
    addNode(&head, 5);
    addNode(&head, 10);
    addNode(&head, 15);

    printf("Linked List before incrementing data: ");
    displayList(head);

    incrementData(head);

    printf("Linked List after incrementing data: ");
    displayList(head);

    return 0;
}
