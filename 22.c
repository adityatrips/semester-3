#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data) {
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void preorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    struct node* stack[100];
    int top = -1;
    stack[++top] = root;
    while (top >= 0) {
        struct node* curr = stack[top--];
        printf("%d ", curr->data);
        if (curr->right != NULL) {
            stack[++top] = curr->right;
        }
        if (curr->left != NULL) {
            stack[++top] = curr->left;
        }
    }
}

void inorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    struct node* stack[100];
    int top = -1;
    struct node* curr = root;
    while (curr != NULL || top >= 0) {
        while (curr != NULL) {
            stack[++top] = curr;
            curr = curr->left;
        }
        curr = stack[top--];
        printf("%d ", curr->data);
        curr = curr->right;
    }
}

void postorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    struct node* stack1[100];
    struct node* stack2[100];
    int top1 = -1;
    int top2 = -1;
    stack1[++top1] = root;
    while (top1 >= 0) {
        struct node* curr = stack1[top1--];
        stack2[++top2] = curr;
        if (curr->left != NULL) {
            stack1[++top1] = curr->left;
        }
        if (curr->right != NULL) {
            stack1[++top1] = curr->right;
        }
    }
    while (top2 >= 0) {
        struct node* curr = stack2[top2--];
        printf("%d ", curr->data);
    }
}

int main() {
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    printf("Preorder traversal: ");
    preorder(root);
    printf("\nInorder traversal: ");
    inorder(root);
    printf("\nPostorder traversal: ");
    postorder(root);

    return 0;
}
