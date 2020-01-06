#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,d;
    scanf("%d%d",&m,&d);
    switch(m)
    {
        case 1:
            if(d >= 21)
                printf("Aquarius\n");
            else
                printf("Capricorn\n");
            break;
        case 2:
            if(d >= 19)
                printf("Pisces\n");
            else
                printf("Aquarius\n");
            break;
        case 3:
            if(d >= 21)
                printf("Aries\n");
            else
                printf("Pisces\n");
            break;
        case 4:
            if(d >= 21)
                printf("Taurus\n");
            else
                printf("Aries\n");
            break;
        case 5:
            if(d >= 21)
                printf("Gemini\n");
            else
                printf("Taurus\n");
            break;
        case 6:
            if(d >= 22)
                printf("Cancer\n");
            else
                printf("Gemini\n");
            break;
        case 7:
            if(d >= 23)
                printf("Leo\n");
            else
                printf("Cancer\n");
            break;
        case 8:
            if(d >= 24)
                printf("Virgo\n");
            else
                printf("Leo\n");
            break;
        case 9:
            if(d >= 24)
                printf("Libra\n");
            else
                printf("Virgo\n");
            break;
        case 10:
            if(d >= 24)
                printf("Scorpio\n");
            else
                printf("Libra\n");
            break;
        case 11:
            if(d >= 23)
                printf("Sagittarius\n");
            else
                printf("Scorpio\n");
            break;
        case 12:
            if(d >= 22)
                printf("Capricorn\n");
            else
                printf("Sagittarius\n");
            break;
    }
}
