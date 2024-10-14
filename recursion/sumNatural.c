#include<stdio.h>

int sumofN(int n)
{
    if(n>0)
    {
        return n+sumofN(n-1);
    }
}

int main()
{
    printf("%d",sumofN(3));
}