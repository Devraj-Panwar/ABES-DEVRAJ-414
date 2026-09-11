#include <stdio.h>
#include <stdlib.h>
void main() {
    int n, i;
    printf("Enter the number of elements in the queue: ");
    scanf("%d", &n);
    int* queue = (int*)malloc(n * sizeof(int));
    if (queue == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &queue[i]);
    }
    printf("The elements in the queue are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
    free(queue);
}