#include<stdio.h>

void bubble_sort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void PrintArray(int arr[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[5],i;
    printf("Enter 5 number: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,5);
    PrintArray(arr,5);
}