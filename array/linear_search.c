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
