// BFS (Breadth First Search)

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

// Breadth First Search
void BFS(struct Node* root) {

    if (root == NULL)
        return;

    struct Node* queue[100];

    int front = 0;
    int rear = 0;

    // Add the root node to the queue
    queue[rear++] = root;

    while (front < rear) {

        struct Node* current = queue[front++];

        printf("%d ", current->data);

        // Add left child to the queue
        if (current->left != NULL)
            queue[rear++] = current->left;

        // Add right child to the queue
        if (current->right != NULL)
            queue[rear++] = current->right;
    }
}

int main() {

    // Create the root node
    struct Node* root = createNode(1);

    // Create other nodes
    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("BFS Traversal: ");
    BFS(root);

    return 0;
}