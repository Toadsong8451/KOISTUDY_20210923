#include<stdio.h>
#include<algorithm>
using namespace std;
int n, k, ans;
int a[1010];
int dp[1010][310];
bool cmp(int x, int y)
{
    return x>y;
}
int main()
{
    scanf("%d %d", &n, &k);
    for(int i=1; i<=n; i++) scanf("%d", &a[i]);
    sort(a+1, a+n+1, cmp);
    for(int i=0; i<k; i++)
    {
        int x;
        scanf("%d", &x);
        ans+=x;
    }
    for(int i=0; i<=n; i++) for(int j=0; j<=k; j++) dp[i][j]= 3000000;
    dp[0][0]=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=k; j++)
        {
            dp[i][j]=dp[i-1][j];
            if((i-2)>3*(j-1)&&i>=2&&j>=1) dp[i][j]=min(dp[i][j], dp[i-2][j-1]+a[i-1]-a[i]);
        }
    }
    ans-=dp[n][k];
    printf("%d", ans);
}
