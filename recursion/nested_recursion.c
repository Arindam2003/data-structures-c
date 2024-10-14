#include<stdio.h>

int func(int n)
{
    if(n>100)
    {
        return (n-10);
    }
    else{
        return func(func(n+11));
    }
}

int main()
{
    int x=func(96);
    printf("%d ",x);
}