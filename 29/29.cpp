#include <iostream>
#include <string>
using namespace std;
int main()
{
    int swit[26] = {10,11,12,13,14,
                    15,16,17,34,18,
                    19,20,21,22,35,
                    23,24,25,26,27,
                    28,29,32,30,31,
                    33};
    for(int i=0;i<26;i++)
        swit[i] = swit[i]/10 + 9*(swit[i]%10);
    string ip;
    cin >> ip;
    int p;
    p = swit[ip[0]-'A'];
    for(int i=1; i<9; i++)
        p += (9-i)*(ip[i]-'0');
    p += (ip[9]-'0');

    if(p%10 == 0)
        cout << "CORRECT!!!\n";
    else
        cout << "WRONG!!!\n";

}
