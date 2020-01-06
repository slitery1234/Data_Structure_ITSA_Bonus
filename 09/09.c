#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        while((n%3)!=0)
            n--;
        if(n)
            printf("%d\n",(3+n)*(n/3)/2);
        else
            printf("0\n");
    }
}
