#include <stdio.h>
#include <algorithm>
#include "lib.h"
<<<<<<< HEAD
void g(int t, int x1, int x2, int y1, int y2)
{
    if(x1==x2||y1==y2) 
    {
        printf("-1");
        return;
    }
    int r=(x1+x2)/2;
    int c=(y1+y2)/2;
    int middle = function(r, c);
    if(middle==t) 
    {
        printf("%d %d", r, c);
        return;
    }
    else if(middle>t)
    {
        g(t, x1, r, y1, c);
        g(t, x1, r, c, c+1);
        g(t, r, r+1, y1, c);
        return;
    }
    else
    {
        g(t, r+1, x2, c+1, y2);
        g(t, r+1, x2, c, c+1);
        g(t, r, r+1, c+1, y2);
        return;
    }
    g(t, r+1, x2, y1, c);
    g(t, x1, r, c+1, y2);
}
=======
using namespace std;
>>>>>>> 53bb89ccd053a93d061ae383bcb6b0fef14109d1
int main()
{
    int i=1;
    int j=100;
    int k;
    scanf("%d", &k);
<<<<<<< HEAD
    g(k, 1, 100, 1, 100);
}
=======
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
>>>>>>> 53bb89ccd053a93d061ae383bcb6b0fef14109d1
