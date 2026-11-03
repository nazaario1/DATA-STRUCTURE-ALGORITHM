//INORDER Traversal(Left ? Root ? Right)
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a node
struct Node* createNode(int value) {

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // Check whether memory allocation was successful
    if (newNode == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Inorder traversal: Left -> Root -> Right
void inorder(struct Node* root) {

    if (root == NULL) {
        return;
    }

    inorder(root->left);

    printf("%d ", root->data);

    inorder(root->right);
}

int main() {

    // Create the root node
    struct Node* root = createNode(1);

    // Create other nodes
    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // Display inorder traversal
    printf("Inorder Traversal: ");
    inorder(root);

    printf("\n");

    return 0;
}