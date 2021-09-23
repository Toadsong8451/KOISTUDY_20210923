#include <stdio.h>
#include "lib.h"
//순차탐색 (interactive)
int i;
int main()
{
    scanf("%d", &i);
    for(int j=0; j<100000; j++)
    {
        if(f(i, j)==1)
        {
            printf("%d", j);
            return 0;
        }
    }
    printf("100000");
}