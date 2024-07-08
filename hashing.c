#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a node structure for linked list
struct node {
    char* key;
    char* value;
    struct node* next;
};

// Initialize a node with key and value
void setNode(struct node* node, char* key, char* value) {
    node->key = key;
    node->value = value;
    node->next = NULL;
}

// Define the hash map structure
struct hashMap {
    int numOfElements; // Number of elements in the hash map
    int capacity; // Total number of buckets (capacity)
    struct node** arr; // Array of linked lists (buckets)
};

// Hash function: Returns the bucket index for a given key
int hashFunction(char* key) {
    // You can create your own hash function based on the problem requirements
    // For example: return (key[0] - 'a') % capacity;
    // Ensure it gives fewer collisions
}

// Insertion into the hash map
void insert(struct hashMap* map, char* key, char* value) {
    int index = hashFunction(key);
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    setNode(newNode, key, value);

    // Insert at the head of the linked list
    newNode->next = map->arr[index];
    map->arr[index] = newNode;
    map->numOfElements++;
}

// Search for a key in the hash map
char* search(struct hashMap* map, char* key) {
    int index = hashFunction(key);
    struct node* current = map->arr[index];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0)
            return current->value;
        current = current->next;
    }
    return NULL; // Key not found
}

// Example usage
int main() {
    int capacity = 10; // Set the capacity of the hash map
    struct hashMap* myMap = (struct hashMap*)malloc(sizeof(struct hashMap));
    myMap->numOfElements = 0;
    myMap->capacity = capacity;
    myMap->arr = (struct node**)malloc(capacity * sizeof(struct node*));

    // Insert some key-value pairs
    insert(myMap, "apple", "fruit");
    insert(myMap, "banana", "yellow");
    insert(myMap, "cherry", "red");

    // Search for a key
    char* result = search(myMap, "banana");
    if (result)
        printf("Value for 'banana': %s\n", result);
    else
        printf("Key 'banana' not found.\n");

    // Clean up memory
    // (You should free all allocated memory when done)
    return 0;
}
