#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a*a+b*b < 40000)
            printf("inside\n");
        else
            printf("outside\n");
    }
}
