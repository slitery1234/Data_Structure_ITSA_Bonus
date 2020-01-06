#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        int k[b][a];
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
                scanf("%d",&k[j][i]);
        }
        for(int i=0;i<b;i++)
        {
            for(int j=0;j<a;j++)
            {
                printf("%d",k[i][j]);
                if(j != a-1)
                    printf(" ");
            }
            printf("\n");
        }
    }
}
