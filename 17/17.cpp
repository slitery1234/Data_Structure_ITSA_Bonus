#include <iostream>
#include <set>
#include <string>
using namespace std;

string toLower(string s)
{
    for(int i=0;i<s.size();i++)
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    return s;
}
int main()
{
    string s;
    set<string> se;
    int printformat = 0;
    while(cin >> s)
    {
        s = toLower(s);
        if(se.count(s) == 0)
        {
            if(printformat == 0)
                printformat = 1;
            else
                cout << " ";
            se.insert(s);
            cout << s;
        }
    }
    cout << "\n";
}
