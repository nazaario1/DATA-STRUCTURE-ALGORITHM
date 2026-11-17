#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct Node {
    int key;
    int value;
    struct Node* next;
};

struct Node* table[SIZE] = {NULL};

void insert(int key, int value) {

    int index = key % SIZE;

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) return;

    newNode->key = key;
    newNode->value = value;

    newNode->next = table[index];

    table[index] = newNode;

    printf("Data inserted successfully!");
}

int main() {

    insert(15, 100);

    return 0;
}