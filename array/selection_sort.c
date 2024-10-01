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
