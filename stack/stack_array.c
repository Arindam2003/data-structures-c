#include<stdio.h>
#include<stdlib.h>
int s[10],top=-1;

void push(int x)
{
    if (top>=10)
    {
        printf("Stack Overflow Condition");
    }
    else
    {
        top++;
        s[top]=x;
    }
    
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("No element");
    }
    else 
    {
        for (i=top;i>=0;i--)
        {
            printf("->%d",s[i]);
        }
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Stack UnderFlow Condition");
    }
    else 
    {
        top--;
    }
}

void peek()
{
    printf("peek element is => %d\n",s[top]);
}

int main()
{
    push(100);
    push(200);
    // pop();
    peek();
    display();
}