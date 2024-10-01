//! Bubble Sort

#include<stdio.h>

int main()
{
	int i,j;
	int arr[]={5,6,7,8,4};
	for (i=0;i<5-1;i++)
	{
		for (j=0;j<5-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for (i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	
	
}


//! Selection Sort

#include <stdio.h>

int main()
{
	int arr[]={14,33,27,10,35,19,44,42};
	int i,j;
	for (i=0;i<8;i++)
	{
		int min=i;
		for(j=i+1;j<8;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
			int temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
			
//			printf("%d ",min);
	}
	
	for(i=0;i<8;i++)
	{
		printf("%d ",arr[i]);
	}
}

//! Linear Search

#include<stdio.h>
void linear(int arr[],int s)
{
	int i;
	for (i=0;i<10;i++)
	{
		if(s==arr[i])
		{
			printf("Element is fouond in %d index",i);
		}
	}
}

int main()
{
	int i,s;
//	int arr[]={70,40,30,11,57,41,25,14,52};
	int arr[10];
	printf("Enter number: ");
	for (i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Numbers are: ");
	for (i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("Searching number: ");
	scanf("%d",&s);
	linear(arr,s);
}


