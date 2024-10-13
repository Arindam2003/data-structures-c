#include<stdio.h>
void treeRec(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        treeRec(n-1);
        treeRec(n-1);
    }
}
int main()
{
    treeRec(3);
    return 0;
}