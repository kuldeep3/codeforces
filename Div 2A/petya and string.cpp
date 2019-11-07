#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2;
    int x = 0;
    int y = 0;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    bool flag = true;
    for (int i = 0; i < s1.length(); i++)
    {
        x = s1[i] - 96;
        y = s2[i] - 96;
        if (x < y)
        {
            cout << "-1" << endl;
            flag = false;
            break;
        }
        else if (x > y)
        {
            cout << "1" << endl;
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout<< "0"<<endl;
    }
    
}