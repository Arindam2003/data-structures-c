#include<stdio.h>

int power(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return power(m,n-1)*m;
    }
}

int main()
{
    int x;
    x=power(2,3);
    printf("%d",x);
}