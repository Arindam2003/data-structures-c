#include<stdio.h>

int max(int x,int y)
{
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int arr[5],i,j,k;
    int maxSum=0;
    printf("Enetr five number: ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<5;i++)
    {
        int s=0;
        for (j=i;j<5;j++)
        {
            //! printf("(%d,%d)",i,j);
            
        }
        printf("\n");
    }
    printf("MaxSum is-%d",maxSum);
}