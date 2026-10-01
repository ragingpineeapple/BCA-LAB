#include<stdio.h>
#define MAX_SIZE 100

typedef struct 
{
    int array[100];
    int front;
    int rear;
} Queue;

void initializeQueue(Queue *q){
    q->front = -1;
    q->rear = 0;
}

int isEmpty(Queue *q){
    return (q->rear == 0);
}

int isFull(Queue *q){
    return (q->rear == MAX_SIZE);
}

void enqueue(Queue *q, int value){
    if(isFull(q)){
        printf("Queue is full\n");
        return;
    }
    q->array[q->rear] = value;
    q->rear++;
}

void dequeue(Queue *q){
    if (isEmpty(q)){
        printf("Queue is empty\n");
        return;
    }
    q->front++;
}

void displayQueue(Queue *q){
    if(isEmpty(q)){
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    int i;
    for (i = q->front + 1; i < q->rear; i++){
        printf("%d ", q->array[i]);
        if (i < q->rear - 1){
            printf("-> ");
        }
    }
    printf("\n");
}

int main() {
    Queue q;
    initializeQueue(&q);
    int i, num;
    printf("Enter 10 numbers: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &num);
        enqueue(&q, num);
    }
    displayQueue(&q);
    return 0;
}
