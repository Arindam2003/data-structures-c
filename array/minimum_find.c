#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    printf("Enter number of element: ");
    scanf("%d",&x);
    int *p;
    p=(int*)malloc(sizeof(int)*x);
    printf("Enter elements: ");
    int i;
    for(i=0;i<x;i++)
    {
        scanf("%d",(p+i));
    }
    printf("Element:");
    for(i=0;i<x;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");
    int min=p[0];
    for(i=0;i<x;i++)
    {
        if(p[0]>p[i])
        {
            min=p[i];
        }
    }
    printf("Minimum is %d",min);
}
