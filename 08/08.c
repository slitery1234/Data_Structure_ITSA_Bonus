#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,x;
    while(scanf("%d",&n)!=EOF)
    {
        x = 0;
        for(int i=2;i<=sqrt(n);i++)
            if(n%i == 0)
                x = 1;
        if(x)   printf("NO\n");
        else    printf("YES\n");
    }
}
