#include<stdio.h>

int main()
{
    int arr[5],i,j,k;
    printf("Enetr five number: ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<5;i++)
    {
        for (j=i;j<5;j++)
        {
            // printf("(%d,%d)",i,j);
            for (k=i;k<j;k++)
            {
                printf("%d",arr[k]);
            }
            printf(" ");
        }
        printf("\n");
    }
}