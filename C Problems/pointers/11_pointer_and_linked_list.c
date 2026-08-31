#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *new_node;
    struct Node *temp;
    int n, value, i, position;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        new_node = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter value: ");
        scanf("%d", &value);

        new_node->data = value;
        new_node->next = NULL;

        if (head == NULL)
            head = new_node;
        else
        {
            temp = head;

            while (temp->next != NULL)
                temp = temp->next;

            temp->next = new_node;
        }
    }

    printf("Enter position to insert at beginning: ");
    scanf("%d", &position);

    new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = position;
    new_node->next = head;
    head = new_node;

    printf("List: ");

    temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    temp = head;

    while (temp != NULL)
    {
        struct Node *next = temp->next;
        free(temp);
        temp = next;
    }

    return 0;
}
