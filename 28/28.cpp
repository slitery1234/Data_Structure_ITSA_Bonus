#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sp,p[3];
    cin >> sp >> p[0] >> p[1] >> p[2];
    string check;
    cin >> check;
    long long int ans=0;
    int arr[7];
    for(int i=0;i<7;i++)
        arr[i] = 0;
    while(cin >> check)
    {
        if(check == sp)
        {
            ans += 2000000;
            arr[0] ++;
            continue;
        }

        int t = 7;
        for(int i=0;i<3;i++)
        {
            for(int j=7;j>=0;j--)
            {
                if(check[j] != p[i][j])
                {
                    if(j < 5)
                    {
                        if(t > j+2)
                            t = j+2;
                    }
                    break;
                }
                else if(j == 0 && check[j] == p[i][j])
                {
                    t = 1;
                }
            }
        }
        arr[t] ++;
        if(t == 1)
            ans += 200000;
        else if(t == 2)
            ans += 40000;
        else if(t == 3)
            ans += 10000;
        else if(t == 4)
            ans += 4000;
        else if(t == 5)
            ans += 1000;
        else if(t == 6)
            ans += 200;
    }
    for(int i=0;i<7;i++)
    {
        cout << arr[i];
        if(i != 6)
            cout << " ";
        else
            cout << "\n";
    }
    cout << ans << "\n";
}
