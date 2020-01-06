#include <stdio.h>
#include <stdlib.h>
int main()
{
    double ip;
    while(scanf("%lf",&ip)!=EOF)
        printf("%.1f\n",ip*1.6);
    return 0;
}
