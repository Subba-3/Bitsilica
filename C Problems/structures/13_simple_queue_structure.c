#include <stdio.h>

struct Queue
{
    int data[10];
    int front;
    int rear;
};

int main()
{
    struct Queue queue;
    int n;

    queue.front = 0;
    queue.rear = -1;

    printf("Enter number of values: ");
    scanf("%d", &n);

    if (n > 10)
    {
        printf("Maximum 10 values allowed\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &queue.data[++queue.rear]);
    }

    printf("Queue values:\n");

    for (int i = queue.front; i <= queue.rear; i++)
    {
        printf("%d ", queue.data[i]);
    }

    printf("\n");

    return 0;
}
