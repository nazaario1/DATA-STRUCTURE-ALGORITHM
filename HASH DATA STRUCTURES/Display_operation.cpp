#include <stdio.h>

#define SIZE 10

struct Node {
    int key;
    int value;
    struct Node* next;
};

struct Node* table[SIZE] = {NULL};

void display() {

    for (int i = 0; i < SIZE; i++) {

        printf("\nIndex %d: ", i);

        struct Node* current = table[i];

        while (current != NULL) {

            printf("[%d:%d] -> ",
                   current->key,
                   current->value);

            current = current->next;
        }

        printf("NULL");
    }
}

int main() {

    display();

    return 0;
}