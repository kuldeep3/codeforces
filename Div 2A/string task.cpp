#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    string s2="";
    cin >> s1;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'y' || s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U' || s1[i] == 'Y')
        {
            
        }
        else
        {
            s2 = s2+s1[i];
        }
        
    }
    transform(s2.begin(),s2.end(),s2.begin(), ::tolower);
    for (int i = 0; i < s2.length(); i++)
    {
        cout<<"."<<s2[i];
    }
}