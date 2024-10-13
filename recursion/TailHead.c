#include<stdio.h>

void func1(int x)
{
    if(x>0)
    {
        // printf("%d ",x);
        // func1(x-1); head to tail
        func1(x-1);
        printf("%d ",x);
    }
}

int main()
{
    func1(3);
}