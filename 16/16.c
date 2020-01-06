#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char c1[200],c2[600];
    scanf("%s%s",c1,c2);
    int t = 0;
    char* ptr = strstr(c2,c1);
    while(ptr != NULL)
    {
        t++;
        ptr++;
        ptr = strstr(ptr,c1);
    }
    printf("%d\n",t);
}
