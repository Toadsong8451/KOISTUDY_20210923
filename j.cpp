#include<cstdio>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int N, K;
int ans;
int arr[1010];

int dp[1010][310];
bool cmp(int x, int y)
{
    return x>y;
}

int main()
{
    scanf("%d %d", &N, &K);
    for(int i=1; i<=N; i++) scanf("%d", arr+i);
    sort(arr+1, arr+N+1, cmp);
    for(int i=0; i<K; i++)
    {
        int x;
        scanf("%d", &x);
        ans += x;
    }

    for(int i=0; i<=N; i++) for(int j=0; j<=K; j++) dp[i][j]= 3000000;

    dp[0][0]=0;
    for(int i=1; i<=N; i++) for(int j=0; j<=K; j++)
    {
        dp[i][j] = dp[i-1][j];
        if((i-2)>3*(j-1) && i>=2 && j>=1) dp[i][j] = min(dp[i][j], dp[i-2][j-1]+arr[i-1] - arr[i]);
    }
    ans -= dp[N][K];
    printf("%d", ans);
}
