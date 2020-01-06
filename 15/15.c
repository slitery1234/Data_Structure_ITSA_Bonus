#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[30];
    char c;
    int t = 1;
    for(int i=0;i<30;i++)
        x[i] = 0;
    while(scanf("%c",&c)!=EOF)
    {
        if(c == ' ')
            t++;
        if(c >= 'a' && c <= 'z')
            x[c-'a']++;
        if(c >= 'A' && c <= 'Z')
            x[c-'A']++;
    }
    printf("%d\n",t);
    for(int i=0;i<26;i++)
    {
        if(x[i]!=0)
            printf("%c : %d\n",i+'a',x[i]);
    }
}
