#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void createLL(int data)
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;
    head=new;
}

void insert_first(int x)
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=head;
    head=new;
}

void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
}

int main()
{
    createLL(34);
    // display();
    insert_first(40);
    insert_first(50);
    display();
}