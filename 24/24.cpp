#include <iostream>
using namespace std;
int main()
{
    long double r;
    long double ans = 0;
    long long int n,p;
    cin >> r >> n >> p;
    for(int i=0;i<n;i++)
    {
        ans = ans + p;
        ans = ans *(1+r);
    }
    cout << (long long int)ans << "\n";
}
