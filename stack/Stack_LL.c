#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top=NULL;

void push()
{
    int x;
    printf("Enter number:");
    scanf("%d",&x);
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=x;
    
    if(top==NULL)
    {
        new_node->next=NULL;
        top=new_node;
    }
    else
    {
        new_node->next=top;
        top=new_node;
    }
}

void pop()
{
    struct node *temp;
    temp=top;
    top=top->next;
    free(temp);
}
void peek()
{
    struct node *temp;
    temp=top;
    printf("\npeek element is->%d\n",temp->data);
}

void display()
{
    struct node *temp=top;
    while(temp!=NULL)
    {
        printf("-->%d",temp->data);
        temp=temp->next;
    }
}

int main()
{
        printf("Push for 1\n");
        printf("Pop for 2\n");
        printf("Peek for 3\n");
        printf("Display for 4\n");
        printf("Exit for 5\n");
    while(1)
    {
        int x;
        printf("\nEnter your choice: ");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Wrong number!!");
            exit(0);
        }
    }
}