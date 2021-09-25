#include <stdio.h>
int a[20001][6];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=n; j++)
        {
            int x;
            scanf("%d", &x);
            a[x][i]=j;
        }
    }
    for(int j=2; j<=5; j++)
    {
        for(int i=1; i<=n; i++)
        {
            if(a[i][j]!=a[i][j-1])
            {
                =i
            }
        }
    }
    a[x][1]
}
