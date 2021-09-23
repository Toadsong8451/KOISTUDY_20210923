#include <stdio.h>
#include <algorithm>
using namespace std;
int a[701];
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; i++)
    {
        int x;
        scanf("%d", &x);
        a[x]++; //n-m개를 골라서 최소로
    }
    int k=n-m;
    long long int ans=0;
    for(int i=1; i<=700; i++)
    {
        int m=min(k, a[i]);
        k-=m;
        ans+=m*i;
    }
    printf("%lld", ans);
}