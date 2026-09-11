#include<stdio.h>
#include<stdlib.h>
#define MAX 5
typedef struct {
    int arr[MAX];
    int front;
    int rear;
} Queue;
void init(Queue *q) {
    q->front = -1;
    q->rear = -1;
}
int isEmpty(Queue *q) {
    return q->front == -1;
}
int isFull(Queue *q) {
    return (q->rear + 1) % MAX == q->front;
}
void enqueue(Queue *q, int val) {
    if (isFull(q)) {
        printf("Queue Overflow!\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % MAX;
    q->arr[q->rear] = val;
}
int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow!\n");
        return -1;
    }
    int val = q->arr[q->front];
    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX;
    }
    return val;
}
void display(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    int i = q->front;
    while (1) {
        printf("%d ", q->arr[i]);
        if (i == q->rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}