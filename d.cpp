//이진탐색
#include <stdio.h>
#include "lib.h"
void g(int n, unsigned long long int x, unsigned long long int y)
{
    if(x==y) 
    {
        printf("%llu", x);
        return;
    }
    int z=f(n, (x+y)/2);
    if(z==1)
    {
        g(n, x, (x+y)/2);
    }
    else if(z==2)
    {
        g(n, (x+y)/2, y);
    }
    else g(n, (x+y)/2, (x+y)/2);
}
int main()
{
    int i;
    scanf("%d", &i);
    g(i, 0, -1);
}