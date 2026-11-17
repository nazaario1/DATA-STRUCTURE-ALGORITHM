#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct Node {
    int key;
    int value;
    struct Node* next;
};

struct Node* table[SIZE] = {NULL};

void deleteKey(int key) {

    int index = key % SIZE;

    struct Node* current = table[index];
    struct Node* previous = NULL;

    while (current != NULL) {

        if (current->key == key) {

            if (previous == NULL) {
                table[index] = current->next;
            }
            else {
                previous->next = current->next;
            }

            free(current);

            printf("Data deleted successfully!");

            return;
        }

        previous = current;
        current = current->next;
    }

    printf("Key not found!");
}

int main() {

  deleteKey(15);

    return 0;
}
