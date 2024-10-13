#include <stdio.h>

int global(int n)
{
    // int x=0;
    if (n > 0)
    {
        // x++;
        return global(n - 1) + n;
    }
    else
    {
        return 0;
    }
}
int stat(int n)
{
    static int x=0;
    if (n > 0)
    {
        x++;
        return stat(n - 1) + x;
    }
    return 0;
}

int main()
{
    // printf("%d",global(5));
    printf("%d",stat(5));
}