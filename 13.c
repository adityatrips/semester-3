#include <stdio.h>
#define MAX_SIZE 5

int front = -1, rear = -1;
int queue[MAX_SIZE];

void enqueue(int value) {
    if ((front == 0 && rear == MAX_SIZE - 1) || (rear == front - 1)) {
        printf("Queue is full\n");
        return;
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = value;
    } else if (rear == MAX_SIZE - 1 && front != 0) {
        rear = 0;
        queue[rear] = value;
    } else {
        rear++;
        queue[rear] = value;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
        return;
    } else if (front == rear) {
        printf("Deleted element is %d\n", queue[front]);
        front = rear = -1;
    } else if (front == MAX_SIZE - 1) {
        printf("Deleted element is %d\n", queue[front]);
        front = 0;
    } else {
        printf("Deleted element is %d\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Elements in the queue are: ");
    if (rear >= front) {
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    } else {
        for (int i = front; i < MAX_SIZE; i++) {
            printf("%d ", queue[i]);
        }
        for (int i = 0; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(60);
    enqueue(70);
    display();
    return 0;
}
