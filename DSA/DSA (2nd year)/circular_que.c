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

int isempty(Queue *q) {
    return q->front == -1;
}

int isfull(Queue *q) {
    return ((q->rear + 1) % MAX == q->front);
}

void enqueue(Queue *q, int val) {
    if (isfull(q)) {
        printf("Queue Overflow\n");
        return;
    }
    if (isempty(q)) {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % MAX;
    q->arr[q->rear] = val;
}

int dequeue(Queue *q) {
    if (isempty(q)) {
        printf("Queue Underflow\n");
        return -1;
    }
    int val = q->arr[q->front];
    if (q->front == q->rear) {  // Last element
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX;
    }
    return val;
}

void display(Queue *q) {
    if (isempty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int i = q->front;
    do {
        printf("%d ", q->arr[i]);
        i = (i + 1) % MAX;
    } while (i != (q->rear + 1) % MAX);
    printf("\n");
}

int main() {
    Queue q;
    init(&q);
    int choice, val;

    while (1) {
        printf("\n========= CIRCULAR QUEUE MENU =========\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');  // Clear input buffer
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                if (scanf("%d", &val) == 1) {
                    enqueue(&q, val);
                } else {
                    printf("Invalid input\n");
                    while (getchar() != '\n');
                }
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
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}
