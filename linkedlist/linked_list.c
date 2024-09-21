#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

/*
void createLL(int data)
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;
    head=new;
}*/

void insert_first(int x)
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=head;
    head=new;
}
void insert_last(int x)
{
    struct node *temp=head,*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=NULL;
    if (head==NULL)
    {
        head=new;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new;
    }
}
void insert_middle(int x,int pos)
{
    struct node *temp=head,*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    if(head==NULL)
    {
        new->next=NULL;
        head=new;
    }
    else
    {
        int count=0;
        while(count<pos-2)
        {
            count++;
            temp=temp->next;
        }
        new->next=temp->next;
        temp->next=new;
    }
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
    // createLL(34);
    // display();
    // insert_first(40);
    // insert_first(50);
    // insert_first(60);
    // createLL(34);
    // insert_last(100);
    // insert_last(200);
    insert_middle(500,1);
    insert_middle(600,2);
    insert_middle(400,3);
    insert_middle(900,2);
    display();
}