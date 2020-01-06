#include <stdio.h>
#include <stdlib.h>
int main()
{
    char trans[200];
    trans[32] = ' ';
    trans[33] = '@';
    trans[34] = '"';
    trans[35] = '$';
    trans[36] = '%';

    trans[37] = '^';
    trans[38] = '*';
    trans[39] = '\'';
    trans[40] = ')';
    trans[41] = '_';

    trans[42] = '(';
    trans[43] = '+';
    trans[44] = '.';
    trans[45] = '=';
    trans[46] = '/';

    trans[47] = '/';
    trans[48] = '-';
    trans[49] = '2';
    trans[50] = '3';
    trans[51] = '4';

    trans[52] = '5';
    trans[53] = '6';
    trans[54] = '7';
    trans[55] = '8';
    trans[56] = '9';

    trans[57] = '0';
    trans[58] = '"';
    trans[59] = '\'';
    trans[60] = '>';
    trans[61] = '=';

    trans[62] = '?';
    trans[63] = '?';
    trans[64] = '#';
    trans[65] = 's';
    trans[66] = 'n';

    trans[67] = 'v';
    trans[68] = 'f';
    trans[69] = 'r';
    trans[70] = 'g';
    trans[71] = 'h';

    trans[72] = 'j';
    trans[73] = 'o';
    trans[74] = 'k';
    trans[75] = 'l';
    trans[76] = ';';

    trans[77] = ',';
    trans[78] = 'm';
    trans[79] = 'p';
    trans[80] = '[';
    trans[81] = 'w';

    trans[82] = 't';
    trans[83] = 'd';
    trans[84] = 'y';
    trans[85] = 'i';
    trans[86] = 'b';

    trans[87] = 'e';
    trans[88] = 'c';
    trans[89] = 'u';
    trans[90] = 'x';
    trans[91] = ']';

    trans[92] = '\\';
    trans[93] = '\\';
    trans[94] = '&';
    trans[95] = '+';
    trans[96] = '1';

    trans[97] = 's';
    trans[98] = 'n';
    trans[99] = 'v';
    trans[100] = 'f';
    trans[101] = 'r';

    trans[102] = 'g';
    trans[103] = 'h';
    trans[104] = 'j';
    trans[105] = 'o';
    trans[106] = 'k';

    trans[107] = 'l';
    trans[108] = ';';
    trans[109] = ',';
    trans[110] = 'm';
    trans[111] = 'p';

    trans[112] = '[';
    trans[113] = 'w';
    trans[114] = 't';
    trans[115] = 'd';
    trans[116] = 'y';

    trans[117] = 'i';
    trans[118] = 'b';
    trans[119] = 'e';
    trans[120] = 'c';
    trans[121] = 'u';

    trans[122] = 'x';
    trans[123] = '}';
    trans[124] = '|';
    trans[125] = '|';

    char c;
    while(scanf("%c",&c)!=EOF)
    {
        int t = c;
        if(c == '\n')
            break;
        if(t>=32 && t<= 125)
            printf("%c",trans[t]);
    }
    printf("\n");
}
