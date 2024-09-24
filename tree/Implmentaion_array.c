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
    int j;
    for(i=0,j=1;j<n;i++)
    {   
        int lp=(j-1)/2;
        if(tree[lp]!=-1 && j<n)  //!Left Child
        {
            printf("Enter Left Child of %d: ",tree[i]);
            scanf("%d",&tree[2*i+1]);
        }
        j++;
        int rp=(j-2)/2;
        if(tree[rp]!=-1 && j<n)   //!Right Child
        {
            printf("Enter Right Child of %d: ",tree[i]);
            scanf("%d",&tree[2*i+2]);
        }
        j++;
    }
}

int main()
{
    createTree();
}