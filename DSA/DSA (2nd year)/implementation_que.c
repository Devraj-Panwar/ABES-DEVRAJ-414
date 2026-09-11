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
int main() {
    Queue q; init(&q);
    int choice, val;
    while (1) {
        printf("\n========= QUEUE MENU =========\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) break;
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &val);
                enqueue(&q, val);
                break;
            case 2:
                val = dequeue(&q);
                if (val != -1) {
                    printf("Dequeued value: %d\n", val);
                }
                break;
            case 3:
                display(&q);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}