#include <stdio.h>
#include <stdlib.h>
int check(int t)
{
    int a = t % 10;
    t/=10;
    int tmp = 0;
    while(t >= 10)
    {
        tmp *= 10;
        tmp += t%10;
        t /= 10;
    }
    if (t == 0)
        return 1;
    else if(t == a)
        return check(tmp);
    else
        return 0;

}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(check(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
}
