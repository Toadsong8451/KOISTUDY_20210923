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
            scanf("%d", &a[j][i]);
        }
    }
    
}