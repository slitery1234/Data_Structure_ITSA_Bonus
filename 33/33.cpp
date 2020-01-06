#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ip;
    while(getline(cin,ip))
    {
        string tmp;
        int a[2000];
        int n=0;
        double sum=0;

        for(int i=0; i<ip.size(); i++)
        {
            if(ip[i] == ' ')
            {
                a[n] = atoi(tmp.c_str());
                sum += a[n];
                n++;
                tmp = "";
            }
            else
                tmp += ip[i];
        }
        if(tmp != "")
        {
            a[n] = atoi(tmp.c_str());
            sum += a[n];
            n++;
            tmp = "";
        }
        printf("Size: %d\n",n);
        printf("Average: %.3f\n",sum/n);

    }
    return 0;
}
