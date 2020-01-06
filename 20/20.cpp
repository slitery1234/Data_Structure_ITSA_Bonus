#include <iostream>
#include <algorithm>
using namespace std;

string func(string s1,string s2)
{
    int a1 = s1.size();
    int a2 = s2.size();
    if(a1 < a2)
        return func("0"+s1,s2);
    else if(a1 > a2)
        return func(s1,"0"+s2);
    else
    {
        string s3 = "";
        int next = 0;
        for(int i=a1-1;i>=0;i--)
        {
            int x = (s1[i]-'0')+(s2[i]-'0');
            s3 = (char)( (x+next)%10 + '0' ) + s3;
            next = (x+next)/10;
        }
        if(next > 0)
            s3 = (char)(next+ '0') + s3;

        return s3;
    }
}

int main()
{
    string s1,s2;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s1 >> s2;
        cout << func(s1,s2) << "\n";
    }
}
