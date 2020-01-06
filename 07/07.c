#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    char op;
    int a,b,c,d;
    for(int i=0;i<n;i++)
    {
        scanf("\n%c%d%d%d%d",&op,&a,&b,&c,&d);
        if(op == '+')
            printf("%d %d\n",a+c,b+d);
        else if(op == '-')
            printf("%d %d\n",a-c,b-d);
        else if(op == '*')
            printf("%d %d\n",a*c-b*d,a*d+c*b);
    }
}
