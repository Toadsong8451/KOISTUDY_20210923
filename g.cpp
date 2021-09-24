#include <stdio.h>
#include <algorithm>
#include "lib.h"
using namespace std;
int main()
{
    int i=1;
    int j=100;
    int k;
    scanf("%d", &k);
    for(int i=1; i<=100; i++)
    {
        int p=-1;
        for(;j>0; j--)
        {
            int t=function(i, j);
            if(t==k) p=j;
            if(t<k)
            {
                j=min(j+1, 100);
                break;
            }
        }
        if(p!=-1)
        {
            printf("%d %d", i, p);
            return 0;
        }
        if(j==0) break;
    }
    printf("-1");
}
