#include <stdio.h>
#include "lib.h"
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
int main()
{
    int k;
    scanf("%d", &k);
    g(k, 1, 100, 1, 100);
}