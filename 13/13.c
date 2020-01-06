#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    if(*(int *)a > *(int *)b)
        return -1;
    return 1;
}
int main()
{
    int n;
    scanf("%d\n",&n);
    for(int i=0; i<n; i++)
    {
        char c;
        int d;
        scanf("%c",&c);
        int arr[100000];
        for(int j=0; j<100000; j++)
            arr[j] = 0;
        int id = 0;
        while(c != '\n')
        {
            if(c == 'S')
            {
                scanf("%d",&d);
                arr[id] = 400+d;
                id++;
            }
            else if(c == 'H')
            {
                scanf("%d",&d);
                arr[id] = 300+d;
                id++;
            }
            else if(c == 'D')
            {
                scanf("%d",&d);
                arr[id] = 200+d;
                id++;
            }
            else if(c == 'C')
            {
                scanf("%d",&d);
                arr[id] = 100+d;
                id++;
            }
            scanf("%c",&c);
        }
        qsort(arr,id,sizeof(int),cmp);
        for(int j=0;j<id;j++)
        {
            if((arr[j] / 100) == 4)
                printf("S%d",arr[j]%100);
            else if((arr[j] / 100) == 3)
                printf("H%d",arr[j]%100);
            else if((arr[j] / 100) == 2)
                printf("D%d",arr[j]%100);
            else if((arr[j] / 100) == 1)
                printf("C%d",arr[j]%100);
            if(j != id-1)
                printf(" ");
        }
        printf("\n");
    }
}
