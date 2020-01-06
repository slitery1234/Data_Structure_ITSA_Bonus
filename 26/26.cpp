#include <iostream>
#include <algorithm>
using namespace std;
bool func(int a,int b)
{
    int sa = 0;
    int sb = 0;
    int ta = a;
    int tb = b;
    while(a != 0)
    {
        sa += a%10;
        a /= 10;
    }
    while(b != 0)
    {
        sb += b%10;
        b /= 10;
    }
    if(sa != sb)
        return sa < sb;
    else
        return ta < tb;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n,func);
    for(int i=0;i<n;i++)
    {
        cout << a[i];
        if(i != n-1)
            cout << " ";
        else
            cout << "\n";
    }
}
