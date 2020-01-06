#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b) != EOF)
    {
        if(b == 1)
            printf("%.1f\n",(float)(a-80) * 0.7);
        else
            printf("%.1f\n",(float)(a-70) * 0.6);
    }
}
