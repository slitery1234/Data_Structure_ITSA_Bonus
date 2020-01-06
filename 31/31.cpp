#include <iostream>
using namespace std;
int main()
{
    string ip;
    while(getline(cin,ip))
    {
        string tmp="";
        int a[20];
        int n=0;
        for(int i=0; i<ip.size(); i++)
        {
            if(ip[i] == ' ')
            {
                a[n] = atoi(tmp.c_str());
                tmp = "";
                n++;
            }
            else
                tmp += ip[i];
        }
        if(tmp != "")
        {
            a[n] = atoi(tmp.c_str());
            tmp = "";
            n++;
        }

        int t=n/2;

        int times = 0;
        for(int i=0; i<=t; i++)
        {
            times = 0;
            int temp = a[i];
            for(int j=i; j<n; j++)
            {
                if(a[j] == a[i])
                    times++;
            }
            if(times > t)
            {
                cout << a[i] << "\n";
                break;
            }
        }
        if(times <= t)
            cout << "NO\n";
    }

    return 0;
}
