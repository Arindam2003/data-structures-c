#include<stdio.h>
#include<math.h>

int tree[100];


void createTree()
{
    int h,n,i,r;
    printf("Enter height: ");
    scanf("%d",&h);
    n=pow(2,h)-1;
    printf("%d",n);
    printf("Enter Root: ");
    scanf("%d",&tree[0]);
    for(i=0;i<n;i++)
    {   
        if(tree[2*i+1]!=-1)
        {
            printf("Enter Left Child of %d: ",tree[i]);
            scanf("%d",&tree[2*i+1]);
        }
        if(tree[2*i+2]!=-1)
        {
            printf("Enter Right Child of %d: ",tree[i]);
            scanf("%d",&tree[2*i+2]);
        }
    }
}


int main()
{
    createTree();
}