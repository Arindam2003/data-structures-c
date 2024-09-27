#include<stdio.h>

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
            // printf("(%d,%d)",i,j);
            for (k=i;k<j;k++)
            {
                s=arr[k]+s;
            }
            printf("%d ",s);
            if(s>maxSum)
            {
                maxSum=s;
            }
        }
        printf("\n");
    }
    printf("MaxSum is-%d",maxSum);
}