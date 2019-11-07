#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        int len = s.length();
        if (len>10)
        {
           int x = len-2;
           cout<<s[0]+to_string(x)+s[len-1]<<endl;  
        }
        else
        {
            cout<<s<<endl;
        }
        
    }
    
}