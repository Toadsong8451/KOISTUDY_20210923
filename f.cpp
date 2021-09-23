//삼분 탐색
#include <stdio.h>
#include "lib.h"
int main()
{
    long long int i;
    scanf("%lld", &i);
    long long int a=(f(i, 2)-2*f(i, 1)+f(i, 0))/2;
    long long int b=f(i, 1)-f(i, 0)-a;
    long long int c=f(i, 0);
    if(a==0)
    {
        if(b==0) printf("%lld", c);
        else if(b>0) printf("%lld", f(i, -100000000));
        else printf("%lld", f(i, 100000000));
    }
    else
    {
        long long int k1=-b/a/2;
        long long int k2=k1+1;
        long long int k3=k1-1;
        long long int m=9223372036854775807;
        if(m>=f(i, k1)) m=f(i, k1);
        if(m>=f(i, k2)) m=f(i, k2);
        if(m>=f(i, k3)) m=f(i, k3);
        printf("%lld", m);
    }
    
}