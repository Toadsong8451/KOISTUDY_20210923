#include <stdio.h>
#include <algorithm>
using namespace std;
int a[50001];
int b[50001];
int main()
{
    int d, n, m;
    scanf("%d %d %d", &d, &n, &m);
    int x1, x2=0;
    x1=0;
    for(int i=0; i<=n-1; i++)
    {
        scanf("%d", &b[i]);
    }
    sort(b, b+n);
    for(int i=0; i<=n-1; i++)
    {
        x2=x1;
        x1=b[i];
        a[x1-x2]++;
    }
    a[d-x1]++;
    int k=n-m;
    long long int ans=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]!=0)
        {
            if(a[i]>m) 
            {
                printf("%d", i); 
                return 0;
            }
            else m-=a[i];
        }
    }
}