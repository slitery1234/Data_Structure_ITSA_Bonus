#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,a,b,c;
    scanf("%d,%d,%d,%d",&N,&a,&b,&c);
    N -= (a*15+b*20+c*30);
    if(N < 0)
    {
        printf("0\n");
        return 0;
    }
    a = N/50;
    N = N%50;
    b = N/5;
    N = N%5;
    c = N;
    printf("%d,%d,%d\n",c,b,a);
}
