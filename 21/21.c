#include <stdio.h>
#include <stdlib.h>
int main()
{
    float ma,mi;
    ma = -1e9;
    mi = 1e9;
    for(int i=0;i<10;i++)
    {
        float f;
        scanf("%f",&f);
        if(f < mi)
            mi = f;
        if(f > ma)
            ma = f;
    }
    printf("maximum:%.2f\n",ma);
    printf("minimum:%.2f\n",mi);
}
