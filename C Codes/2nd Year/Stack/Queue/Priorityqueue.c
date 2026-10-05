// wap to implement a priority queue
#include <stdio.h>
#include <stdlib.h>

// for a node in the priority queue
typedef struct Node {
    int data;
    int priority;
    struct Node* next;
} Node;

// structure for the priority queue
typedef struct {
    Node* front;
} PriorityQueue;

// Function to create a new node
Node* createNode(int data, int priority) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data = data;
    newNode->priority = priority;
    newNode->next = NULL;
    return newNode;
}

// Function to initialize the priority queue
PriorityQueue* createPriorityQueue() {
    PriorityQueue* pq = (PriorityQueue*)malloc(sizeof(PriorityQueue));
    if (!pq) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    pq->front = NULL;
    return pq;
}

// Function to insert an element into the priority queue
void enqueue(PriorityQueue* pq, int data, int priority) {
    Node* newNode = createNode(data, priority);
    if (!newNode) {
        return;
    }

    if (!pq->front || pq->front->priority > priority) {
        newNode->next = pq->front;
        pq->front = newNode;
        return;
    }

    Node* current = pq->front;
    while (current->next && current->next->priority <= priority) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}

// Function to remove an element from the priority queue
int dequeue(PriorityQueue* pq) {
    if (!pq || !pq->front) {
        printf("Priority queue is empty\n");
        return -1; // Return -1 to indicate an error
    }

    Node* temp = pq->front;
    int data = temp->data;
    
    pq->front = pq->front->next;
    free(temp);
    return data;
}

    
