#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtK(struct Node** head, int data, int k) {
    if (k < 1) {
        printf("Invalid position.\n");
        return;
    }
    if (k == 1) {
        insertAtBeginning(head, data);
        return;
    }
    struct Node* newNode = createNode(data);
    struct Node* temp = *head;
    for (int i = 1; i < k - 1; i++) {
        if (temp == NULL) {
            printf("Invalid position.\n");
            return;
        }
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid position.\n");
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    struct Node* temp = *head;
    *head = temp->next;
    free(temp);
}

void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    struct Node* temp = *head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void deleteAtK(struct Node** head, int k) {
    if (k < 1) {
        printf("Invalid position.\n");
        return;
    }
    if (k == 1) {
        deleteAtBeginning(head);
        return;
    }
    struct Node* temp = *head;
    for (int i = 1; i < k - 1; i++) {
        if (temp == NULL) {
            printf("Invalid position.\n");
            return;
        }
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position.\n");
        return;
    }
    struct Node* toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);
}

void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int search(struct Node* head, int value) {
    struct Node* current = head;
    int position = 1;
    while (current != NULL) {
        if (current->data == value) {
            return position;
        }
        current = current->next;
        position++;
    }
    return -1;
}

int main() {
    struct Node* head = NULL;

    printf("Inserting 10 at beginning.\n");
    insertAtBeginning(&head, 10);
    printf("Displaying linked list: ");
    display(head);
    printf("\n");

    printf("Inserting 20 at the end.\n");
    insertAtEnd(&head, 20);
    printf("Displaying linked list: ");
    display(head);
    printf("\n");

    printf("Inserting 15 in the between.\n");
    insertAtK(&head, 15, 2);
    printf("Displaying linked list: ");
    display(head);
    printf("\n");

    printf("Deleting 10 from beginning.\n");
    deleteAtBeginning(&head);
    printf("Displaying linked list: ");
    display(head);
    printf("\n");

    printf("Deleting 20 from end.\n");
    deleteAtEnd(&head);
    printf("Displaying linked list: ");
    display(head);
    printf("\n");

    printf("Searching 15.\n");
    int position = search(head, 15);
    if (position != -1)
        printf("Value %d found at position %d\n", 15, position);
    else
        printf("Value %d not found in the linked list\n", 15);
    printf("Displaying linked list: ");
    display(head);
    printf("\n");

    printf("Deleting 15 from the middle.\n");
    deleteAtK(&head, 1);
    printf("Displaying linked list: ");
    display(head);
    printf("\n");

    return 0;
}
