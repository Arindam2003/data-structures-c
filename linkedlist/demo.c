#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};
struct Node *start = NULL;

void createLL()
{
    if (start == NULL)
    {
        printf("<---Creat Your First Node--->\n");
        int n;
        printf("What data you Enter:");
        scanf("%d", &n);
        start = (struct Node *)malloc(sizeof(struct Node));
        start->data = n;
        start->link = NULL;
    }
    else
    {
        int n;
        struct Node *temp = start, *new_node;
        new_node = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter Data: ");
        scanf("%d", &n);
        new_node->data = n;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = new_node;
        new_node->link = NULL;
        temp = new_node;
    }
}
void display()
{
    struct Node *temp = start;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}

int main()
{
    while (1)
    {
        int x;
        printf("1. Create\n2. Display\n3.Exit\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            createLL();
            break;
        case 2:
            display();
            printf("\n");
            break;
        case 3:
            exit(0);
        }
    }
    return 0;
}