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

void InsertBeg(int x)
{
    struct node *temp=head,*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->prev=NULL;
    new_node->next=temp;
    new_node->data=x;
    temp->prev=new_node;
    head=new_node;
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

void InsertMiddle(int x,int size)
{
    struct node *temp=head,*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    int count=0;
    while(count<size-2)
    {
        count++;
        temp=temp->next;
    }
    new_node->data=x;
    new_node->prev=temp;
    new_node->next=temp->next;
    temp->next->prev=new_node;
    temp->next=new_node;
}

void InsertLast (int x)
{
    struct node *temp=head,*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->next=NULL;
    new->data=x;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    new->prev=temp;
    temp->next=new;
}

void length()
{
    struct node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    printf("%d",count);
}

void reverse()
{
    struct node *current=head,*next_node=NULL,*prev_node=NULL;
    while(current!=NULL)
    {
        next_node=current->next;
        current->next=current->prev;
        current->prev=next_node;
        
        prev_node=current;
        current=next_node; //!for move forward
    }
    head=prev_node;
    current=head;
    while(current!=NULL)
    {
        printf("-->%d",current->data);
        current=current->next;
    }
}


int main()
{
    create(10);
    create(20);
    InsertBeg(500);
    InsertMiddle(1000,2);
    InsertLast(18);
    display();
    printf("\n");
    // length();
    reverse();
}