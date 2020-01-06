#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    pair<int,int> ip[n];
    for(int i=0; i<n; i++)
        cin >> ip[i].first >> ip[i].second;
    sort(ip,ip+n);
    int tl[n];
    for(int i=0; i<n; i++)
        tl[i] = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(tl[j] <= ip[i].first)
            {
                tl[j] = ip[i].second;
                break;
            }
        }
    }
    for(int j=0; j<n; j++)
    {
        if(tl[j] == 0)
        {
            cout << j << "\n";
            return 0;
        }
    }
    cout << n << "\n";
}
