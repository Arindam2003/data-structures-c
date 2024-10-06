#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL,*temp=NULL;

void createLL(int x)
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    if(head==NULL)
    {
        head=new;
        temp=new;
        new->next=head;
    }
    else
    {
        temp->next=new;
        new->next=head;
        temp=new;
    }
}

void display()
{
    struct node *temp=head;
    do
    {
        printf("-->%d",temp->data);
        temp=temp->next;
    }while(temp!=head);
}

int main()
{
    createLL(12);
    createLL(13);
    display();
}
