#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *first;
    struct Node *second;
    struct Node *third;

    first = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    if (first == NULL || second == NULL || third == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter first value: ");
    scanf("%d", &first->data);

    printf("Enter second value: ");
    scanf("%d", &second->data);

    printf("Enter third value: ");
    scanf("%d", &third->data);

    first->next = second;
    second->next = third;
    third->next = NULL;

    while (first != NULL)
    {
        printf("%d ", first->data);
        first = first->next;
    }

    printf("\n");

    free(second);
    free(third);

    return 0;
}
