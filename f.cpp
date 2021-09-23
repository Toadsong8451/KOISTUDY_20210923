//삼분 탐색
#include <stdio.h>
#include "lib.h"
int main()
{
    int i;
    scanf("%d", &i);
    long long int a=(f(i, 2)-2*f(i, 1)+f(i, 0))/2;
    long long int b=f(i, 1)-f(i, 0)-a;
    long long int c=f(i, 0);
    int k1=-2*b/a;
    int k2=k1+1;
    int k3=k1-1;
    long long int m=100000000000;
    if(m>=a*k1*k1+b*k1+c) m=a*k1*k1+b*k1+c;
    if(m>=a*k2*k2+b*k2+c) m=a*k2*k2+b*k2+c;
    if(m>=a*k3*k3+b*k3+c) m=a*k3*k3+b*k3+c;
    printf("%llu", m);
}