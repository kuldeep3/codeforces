#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,empty="";
    cin >> s;
    int len = s.length(), i;
    for (i = 0; i < len; i++)
    {
        if (s[i] != '+')
        {
            empty = empty + s[i];
        }
    }
    sort(empty.begin(), empty.end());
    int len1 = empty.length();
    for (int i = 0; i < len1-1; i++)
    {
        empty.insert((2*i)+1,"+");
    }
    cout<<empty;
}