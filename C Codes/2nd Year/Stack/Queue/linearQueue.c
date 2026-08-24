/* *Linear Queue* using array

   * Enqueue
   * Dequeue
   * Display*/
  #include <stdio.h>
  #define MAX 100
  int queue[MAX];
    int front = -1;
    int rear = -1;
  
    void enqueue(int value) {
        if (rear == MAX - 1) {
            printf("Queue is full\n");
            return;
        }
        if (front == -1) {
            front = 0;
        }
        queue[++rear] = value;
    }

    int dequeue() {
        if (front == -1) {
            printf("Queue is empty\n");
            return -1;
        }
         int x = queue[front];
        front++;
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        return x;
    }

    void display() {
        if (front == -1) {
            printf("Queue is empty\n");
            return;
        }
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }

    int main(){
        enqueue(10);
        enqueue(20);
        enqueue(30);
        enqueue(40);
        printf("Displaying queue:\n");
        display();
        printf("Dequeued: %d\n", dequeue());
        printf("Displaying queue after dequeue:\n");
        display();
        return 0;
    }