#define SIZE 100

#include <stdio.h>
#include <stdlib.h>

void main() {
    int ch;
    int queue[SIZE];
    int rear = -1;
    int front = -1;

    while (1) {
        printf("\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice\n[INT] ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                if (rear == SIZE - 1)
                    printf("Overflow.");
                else {
                    if (front == -1) {
                        front = 0;
                        int n;
                        printf("Enter element to inserted\n[INT] ");
                        scanf("%d", &n);
                        rear++;
                        queue[rear] = n;
                    } else {
                        int n;
                        printf("Enter element to inserted\n[INT] ");
                        scanf("%d", &n);
                        rear++;
                        queue[rear] = n;
                    }
                }
                break;
            case 2:
                if (front == -1 || front > rear)
                    printf("Underflow.");
                else {
                    printf("Element deleted from the queue: %d", queue[front]);
                    front++;
                }
                break;
            case 3:
                if (front == -1)
                    printf("Empty queue.");
                else {
                    printf("Queue: \n");
                    for (int i = front; i <= rear; i++)
                        printf("%d ", queue[i]);
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Incorrect choice!");
        }
    }
}
