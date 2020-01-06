#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n = atoi(s.c_str());
    for(int i=0;i<n;i++)
    {
        getline(cin,s);
        while(s[0] == '\0')
            getline(cin,s);
        int ans = 0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j] != '\n'&& s[j] != '\r')
                ans += s[j];
        }
        cout << ans << "\n";
    }
}
