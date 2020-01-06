#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int s = a*60 + b;
    int e = c*60 + d;
    int t = e-s;
    int ans = 0;
    int temp = 0;
    while(temp+30 < t)
    {
        if(temp < 120)
            ans += 30;
        else if(temp < 240)
            ans += 40;
        else
            ans += 60;
        temp += 30;
    }
    printf("%d\n",ans);
}
