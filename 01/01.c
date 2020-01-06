#include <stdio.h>
#include <stdlib.h>

void replace(int a,char c[5][23],int place)
{
    if(a == 1)
        c[0][place+4] = '*';
    else if(a == 4)
    {
        c[0][place] = '*';
        c[0][place+4] = '*';
    }
    else
    {
        for(int i=0;i<5;i++)
            c[0][place+i] = '*';
    }

    if(a == 0||a == 4||a == 8||a == 9)
    {
        c[1][place] = '*';
        c[1][place+4] = '*';
    }
    else if(a == 5 || a == 6)
        c[1][place] = '*';
    else
        c[1][place+4] = '*';

    if(a == 0)
    {
        c[2][place] = '*';
        c[2][place+4] = '*';
    }
    else if(a == 1 || a == 7)
        c[2][place+4] = '*';
    else
    {
        for(int i=0;i<5;i++)
            c[2][place+i] = '*';
    }

    if(a == 2)
        c[3][place] = '*';
    else if(a == 0||a == 6||a == 8)
    {
        c[3][place] = '*';
        c[3][place+4] = '*';
    }
    else
        c[3][place+4] = '*';

    if(a == 1||a == 4||a == 7||a == 9)
        c[4][place+4] = '*';
    else
    {
        for(int i=0;i<5;i++)
            c[4][place+i] = '*';
    }
}
int main()
{
    char a,b,c,d;
    scanf("%c%c%c%c",&a,&b,&c,&d);
    char ans[5][23];
    for(int i=0;i<5;i++)
        for(int j=0;j<23;j++)
            ans[i][j] = ' ';
    replace(a-'0',ans,0);
    replace(b-'0',ans,6);
    replace(c-'0',ans,12);
    replace(d-'0',ans,18);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<23;j++)
            printf("%c",ans[i][j]);
        printf("\n");
    }
    return 0;
}
