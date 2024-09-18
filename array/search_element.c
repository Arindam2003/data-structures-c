#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, x;
    printf("Enter number contain in array: ");
    scanf("%d", &x);
    p = (int *)malloc(sizeof(int) * x);
    printf("Enter Element in array: ");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", (p + i)); //! same as &p[i]=&*(p+i)=(p+i)
    }
    printf("Array element: ");
    for (int i = 0; i < x; i++)
    {
        printf("%d ", p[i]);
    }
    printf("Which element you find:");
    int num, j = 0, i;
    scanf("%d", &num);
    for (i = 0; i < x; i++)
    {
        if (num == p[i])
        {
            j++;
            break;
        }
    }
    if (j >= 0)
    {
        printf("Number find on index no. %d", i);
    }
    else
    {
        printf("Number cant find");
    }
    return 0;
}