#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head=NULL;

void create(int x)
{
    struct node *new;
    struct node *temp=head;
    new=(struct node*)malloc(sizeof(struct node));
    new->prev=NULL;
    new->next=NULL;
    new->data=x;
    if (head==NULL)
    {
        head=new;
    }
    else
    {
        new->prev=temp;
        temp->next=new;
        temp=temp->next;
    }
}


void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("-->%d",temp->data);
        temp=temp->next;
    }
}


int main()
{
    create(10);
    create(20);
    display();
}