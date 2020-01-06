#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ans,check;
    cin >> ans;
    while(cin >> check)
    {
        if(check == "0000")
            return 0;
        else
        {
            int a = 0;
            int b = 0;
            for(int i=0; i<4; i++)
            {
                for(int j=0; j<4; j++)
                {
                    if(ans[i] == check[j])
                    {
                        if(i == j)
                            a++;
                        else
                            b++;
                    }
                }
            }
            cout << a << "A" << b << "B\n";
        }
    }
}
