// POSTORDER Traversal (Left ? Right ? Root)

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

// Function to create a node
struct Node* createNode(int value) {

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Postorder traversal
void postorder(struct Node* root) {

    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);

    printf("%d ", root->data);
}

int main() {

    struct Node* root = createNode(1);

    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Postorder: ");
    postorder(root);

    return 0;
}