/* *Circular Queue* using array

   * Enqueue
   * Dequeue
   * Display*/
  #include <stdio.h>
  #define MAX 100
  int Cqueue[MAX];
  int front = -1;
  int rear = -1;

  void enqueue(int value){
    if((rear + 1) % MAX == front){
        printf("Queue is full\n");
        return;
    }
    if(front == -1){
        front = 0;
    }
    rear = (rear + 1) % MAX;
    Cqueue[rear] = value;
  }

  int dequeue(){
    if(front == -1){
        printf("Queue is empty\n");
        return -1;
    }
    int x = Cqueue[front];
    if(front == rear){
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
  }

  void display(){
    if(front == -1){
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while(1){
        printf("%d ", Cqueue[i]);
        if(i == rear){
            break;
        }
        i = (i + 1) % MAX;
    }
    printf("\n");
  }