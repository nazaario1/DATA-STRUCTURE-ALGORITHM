#include <stdio.h>

#define SIZE 10

int hashFunction(int key) {
    return key % SIZE;
}

int main() {
    int key = 25;

    printf("Index = %d", hashFunction(key));

    return 0;
}