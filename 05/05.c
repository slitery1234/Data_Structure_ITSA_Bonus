#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,ans[8];
    while(scanf("%d",&a)!=EOF)
    {
        if(a < 0)
        {
            ans[0] = 1;
            a += 128;
        }
        else
            ans[0] = 0;
        for(int i=0;i<7;i++)
        {
            ans[7-i] = a%2;
            a/=2;
        }
        for(int i=0;i<8;i++)
            printf("%d",ans[i]);
        printf("\n");
    }
}
