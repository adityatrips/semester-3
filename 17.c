#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void addNode(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int countItem(struct Node* head, int item) {
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == item) {
            count++;
        }
        current = current->next;
    }
    return count;
}

int main() {
    struct Node* head = NULL;
    addNode(&head, 1);
    addNode(&head, 2);
    addNode(&head, 3);
    addNode(&head, 2);
    addNode(&head, 4);
    addNode(&head, 2);
    addNode(&head, 5);
    addNode(&head, 2);
    int item = 2;
    int count = countItem(head, item);
    printf("The item %d is present %d times in the linked list.\n", item, count);
    return 0;
}
