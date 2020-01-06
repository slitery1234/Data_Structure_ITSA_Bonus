#include <stdio.h>
#include <stdlib.h>
int check(int a[3][3])
{
    if((a[0][0] == a[0][1]) && (a[0][1] == a[0][2]))
        return 1;
    if((a[1][0] == a[1][1]) && (a[1][1] == a[1][2]))
        return 1;
    if((a[2][0] == a[2][1]) && (a[2][1] == a[2][2]))
        return 1;

    if((a[0][0] == a[1][0]) && (a[1][0] == a[2][0]))
        return 1;
    if((a[0][1] == a[1][1]) && (a[1][1] == a[2][1]))
        return 1;
    if((a[0][2] == a[1][2]) && (a[1][2] == a[2][2]))
        return 1;

    if((a[0][0] == a[1][1]) && (a[1][1] == a[2][2]))
        return 1;
    if((a[0][2] == a[1][1]) && (a[1][1] == a[2][0]))
        return 1;
    return 0;
}
int main()
{
    int ip[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            scanf("%d",&ip[i][j]);
    }
    if(check(ip))
        printf("True\n");
    else
        printf("False\n");

}
