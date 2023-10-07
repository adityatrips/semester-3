#include <stdio.h>

void push(int stack[], int top, int len) {
    if (top >= len) {
        printf(" ---- STACK OVERFLOW ---- ");
    } else {
        int num;
        printf("Enter value to be pushed: ");

        scanf("%d", &num);
        top++;
        stack[top] = num;
    }
}

void pop(int stack[], int top) {
    if (top <= -1) {
        printf(" ---- STACK UNDERFLOW ---- ");
    } else {
        printf("\nThe popped element is %d", stack[top]);
        top--;
    }
}

void peek(int stack[], int top) {
    if (top <= -1) {
        printf("STACK UNDERFLOW");
    } else {
        printf("\nTop-most element %d", stack[top]);
    }
}

void display(int stack[], int top) {
    if (top >= 0) {
        printf("Elements in the stack are:");
        for (int i = top; i >= 0; i--) {
            printf("\n%d", stack[i]);
        }

    } else {
        printf(" ---- STACK EMPTY ---- ");
    }
}

void main() {
    int x, n;

    printf("Enter size of stack: ");
    scanf("%d", &n);

    int stack[n];
    int len = sizeof(stack) / sizeof(int) - 1;
    int top = -1;

    while (1) {
        int ch;
        printf("\n1: Push\n2: Pop\n3: Peek\n4: Display\n\n");

        printf("Choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                push(stack, top, len);
                break;
            case 2:
                pop(stack, top);
                break;
            case 3:
                peek(stack, top);
                break;
            case 4:
                display(stack, top);
                break;
            default:
                printf(" ---- INVALID CHOICE  ---- ");
                break;
        }
    }
}
