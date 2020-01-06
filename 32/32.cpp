#include <iostream>
using namespace std;
int main()
{
    string ip;
    getline(cin,ip);
    while(ip[0] == '\0')
        getline(cin,ip);
    int mo;
    cin >> mo;
    for(int i=0;i<ip.size();i++)
    {
        if(ip[i] >= 'a' && ip[i] <= 'z')
        {
            int k = ip[i] + mo;
            if(k > 'z')
                k -= 26;
            cout << (char)k;
        }
        else if(ip[i] >= 'A' && ip[i] <= 'Z')
        {
            int k = ip[i] + mo;
            if(k > 'Z')
                k -= 26;
            cout << (char)k;
        }
        else if(ip[i] >= '0' && ip[i] <= '9')
        {
            int k = ip[i] + mo;
            if(k > '9')
                k -= 10;
            cout << (char)k;
        }
        else
            cout << ip[i];
    }
    cout << "\n";

    return 0;
}
