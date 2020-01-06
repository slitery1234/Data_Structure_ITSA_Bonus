#include <stdio.h>
#include <stdlib.h>
int rec(int k)
{
    if(k == 0|| k == 1)
        return k+1;
    else
        return rec(k-1) + rec(k/2);
}
int main()
{
    int k;
    scanf("%d",&k);
    printf("%d\n",rec(k));
}
