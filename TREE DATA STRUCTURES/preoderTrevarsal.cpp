// PREORDER Traversal (Root ? Left ? Right)

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

// Function to create a node
struct Node* createNode(int value) {

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Preorder traversal
void preorder(struct Node* root) {

    if (root == NULL)
        return;

    printf("%d ", root->data);

    preorder(root->left);
    preorder(root->right);
}

int main() {

    struct Node* root = createNode(1);

    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Preorder: ");
    preorder(root);

    return 0;
}
