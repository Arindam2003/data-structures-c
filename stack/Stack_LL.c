#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top=NULL;

void push(int x)
{
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
    push(23);
    push(12);
    push(10);
    // pop();
    peek();
    display();
}