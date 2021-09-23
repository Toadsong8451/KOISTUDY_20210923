//자벌레 탐색
#include <stdio.h>
unsigned long long int m;
unsigned long long int a[100001];
int main()
{
    int n;
    unsigned long long int k;
    scanf("%d %llu", &n, &k);
    for(int i=1; i<=n; i++)
    {
        scanf("%llu", &a[i]);
    }
    unsigned long long int m=0;
    unsigned long long int y1=0;
    unsigned long long int y2;
    for(int i=1; i<=n; i++)
    {
        y1=0;
        int j=i;
        while(k>=y1&&j<=n)
        {
            y2=y1;
            y1+=a[j];
            j++;
        }
        if(m<=y2) m=y2;
    }
    printf("%llu", m);
}