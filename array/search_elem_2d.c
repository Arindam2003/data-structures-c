#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Number of row:");
    scanf("%d", &n);
    printf("Enter number of Col:");
    scanf("%d", &m);
    //! store address of col and corrosponding value
    int **x = (int **)malloc(sizeof(int *) * n);
    int i, j, p;
    for (i = 0; i < n; i++)
    {
        //! must be first array in 2nd array
        x[i] = (int *)malloc(sizeof(int) * m);
    }
    //! Take input from user
    printf("Enter elements:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("Elements are:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    printf("Enter which number find:");
    int num;
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (num == x[i][j])
            {
                printf("row-%d col-%d", i, j);
                break;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        free(x[i]);
    }
    free(x);
    return 0;
}
